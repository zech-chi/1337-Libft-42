#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char **ft_split(char const *s, char c);

struct  Test
{
    char *s;
    char c;
    char **expected;
};


int main()
{
    struct Test Test_cases[9];

    // test_case 1
    Test_cases[0].s = strdup("hello world");
    Test_cases[0].c = ' ';
    Test_cases[0].expected = malloc(3 * sizeof(char *));
    Test_cases[0].expected[0] = strdup("hello");
    Test_cases[0].expected[1] = strdup("world");
    Test_cases[0].expected[2] = NULL;

    // test_case 2
    Test_cases[1].s = strdup("+hello+world+");
    Test_cases[1].c = '+';
    Test_cases[1].expected = malloc(3 * sizeof(char *));
    Test_cases[1].expected[0] = strdup("hello");
    Test_cases[1].expected[1] = strdup("world");
    Test_cases[1].expected[2] = NULL;

    // test_case 3
    Test_cases[2].s = strdup("***1337**future****is***loading********");
    Test_cases[2].c = '*';
    Test_cases[2].expected = malloc(5 * sizeof(char *));
    Test_cases[2].expected[0] = strdup("1337");
    Test_cases[2].expected[1] = strdup("future");
    Test_cases[2].expected[2] = strdup("is");
    Test_cases[2].expected[3] = strdup("loading");
    Test_cases[2].expected[4] = NULL;

    // test_case 4
    Test_cases[3].s = strdup("$$$money is power");
    Test_cases[3].c = '$';
    Test_cases[3].expected = malloc(2 * sizeof(char *));
    Test_cases[3].expected[0] = strdup("money is power");
    Test_cases[3].expected[1] = NULL;

    // test_case 5
    Test_cases[4].s = strdup("money is power$$$");
    Test_cases[4].c = '$';
    Test_cases[4].expected = malloc(2 * sizeof(char *));
    Test_cases[4].expected[0] = strdup("money is power");
    Test_cases[4].expected[1] = NULL;

    // test_case 6
    Test_cases[5].s = strdup("$$$money is power$$$");
    Test_cases[5].c = '$';
    Test_cases[5].expected = malloc(2 * sizeof(char *));
    Test_cases[5].expected[0] = strdup("money is power");
    Test_cases[5].expected[1] = NULL;

    // test_case 7
    Test_cases[6].s = strdup("42 network");
    Test_cases[6].c = '0';
    Test_cases[6].expected = malloc(2 * sizeof(char *));
    Test_cases[6].expected[0] = strdup("42 network");
    Test_cases[6].expected[1] = NULL;

    // test_case 8
    Test_cases[7].s = strdup("");
    Test_cases[7].c = '#';
    Test_cases[7].expected = malloc(1 * sizeof(char *));
    Test_cases[7].expected[0] = NULL;

    // test_case 9
    Test_cases[8].s = strdup("############################");
    Test_cases[8].c = '#';
    Test_cases[8].expected = malloc(1 * sizeof(char *));
    Test_cases[8].expected[0] = NULL;

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char purple[] = "\x1b[35m";
    char yellow[] = "\033[1;33m";
    char color_close[] = "\x1b[0m";

    char color[15];

    printf("%s", yellow);
    printf("\t\t███████╗███████╗░█████╗░██╗░░██╗░░░░░░░█████╗░██╗░░██╗██╗\n");
    printf("\t\t╚════██║██╔════╝██╔══██╗██║░░██║░░░░░░██╔══██╗██║░░██║██║\n");
    printf("\t\t░░███╔═╝█████╗░░██║░░╚═╝███████║█████╗██║░░╚═╝███████║██║\n");
    printf("\t\t██╔══╝░░██╔══╝░░██║░░██╗██╔══██║╚════╝██║░░██╗██╔══██║██║\n");
    printf("\t\t███████╗███████╗╚█████╔╝██║░░██║░░░░░░╚█████╔╝██║░░██║██║\n");
    printf("\t\t╚══════╝╚══════╝░╚════╝░╚═╝░░╚═╝░░░░░░░╚════╝░╚═╝░░╚═╝╚═╝\n\n");
    printf("%s", color_close);

    for (int i = 0; i < 9; i++)
    {
        usleep(700 * 1000);
        printf("%s**************************************** test %d ****************************************%s\n", yellow, i + 1, color_close);
        printf("%s#%s", yellow, color_close);
        printf(" test case       : %ss = \"%s\"%s", purple, Test_cases[i].s, color_close);
        printf(", %sc = '%c'%s\n", purple, Test_cases[i].c, color_close);
        char **your_output = ft_split(Test_cases[i].s, Test_cases[i].c);
        int diff = 0;
        int j1 = 0;
        int j2 = 0;

        while (your_output[j1] && Test_cases[i].expected[j2])
        {
            diff += strcmp(your_output[j1++], Test_cases[i].expected[j2++]);
        }
        if (your_output[j1])
        {
            diff = 1;
        }
        if (Test_cases[i].expected[j2])
            diff = 1;

        
        if (diff == 0)
            strcpy(color, green);
        else
            strcpy(color, red);

        printf("%s#%s", yellow, color_close);
        printf(" your output     : ");
        printf("%s", color);
        printf("[");
        j1 = 0;
        while (your_output[j1])
        {
            if (j1 != 0)
                printf(",");
            printf("\"%s\"", your_output[j1]);
            j1++;
        }
        printf("]\n");
        printf("%s", color_close);

        printf("%s#%s", yellow, color_close);
        printf(" expected output : ");
        printf("%s", green);
        printf("[");
        j2 = 0;
        while (Test_cases[i].expected[j2])
        {
            if (j2 != 0)
                printf(",");
            printf("\"%s\"", Test_cases[i].expected[j2]);
            j2++;
        }
        printf("]\n");
        printf("%s", color_close);

        if (diff == 0)
        {
            printf("%s#%s", yellow, color_close);
            printf(" status          : ✅\n");
        }
        else
        {
            printf("%s#%s", yellow, color_close);
            printf(" status          : ❌\n");
        }
    }
    printf("%s****************************************************************************************%s\n", yellow, color_close);
    for (int i = 0; i < 9; i++)
    {
        free(Test_cases[i].s);
        int j = 0;
        while (Test_cases[i].expected[j])
            free(Test_cases[i].expected[j++]);
    }
}
