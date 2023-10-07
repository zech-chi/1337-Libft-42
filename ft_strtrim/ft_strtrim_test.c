#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strtrim(char const *s1, char const *set);

struct  Test
{
    char *s1;
    char *set;
    char *expected;
};

int main()
{
    int Test_cases_size = 7;
    struct Test Test_cases[Test_cases_size];

    // test case 1
    Test_cases[0].s1 = strdup("+_+");
    Test_cases[0].set = strdup("+");
    Test_cases[0].expected = strdup("_");

    // test case 2
    Test_cases[1].s1 = strdup("+_+----------");
    Test_cases[1].set = strdup("-");
    Test_cases[1].expected = strdup("+_+");

    // test case 3
    Test_cases[2].s1 = strdup("----------+_+");
    Test_cases[2].set = strdup("-");
    Test_cases[2].expected = strdup("+_+");

    // test case 4
    Test_cases[3].s1 = strdup("----------+_+----------");
    Test_cases[3].set = strdup("-");
    Test_cases[3].expected = strdup("+_+");

    // test case 5
    Test_cases[4].s1 = strdup("----------+_+----------");
    Test_cases[4].set = strdup("");
    Test_cases[4].expected = strdup("----------+_+----------");

    // test case 6
    Test_cases[5].s1 = strdup("<<<---<..>-<...><<+_+**#~=");
    Test_cases[5].set = strdup("<.->*#~=");
    Test_cases[5].expected = strdup("+_+");

    // test case 7
    Test_cases[6].s1 = strdup(" 1337 future is loading            ");
    Test_cases[6].set = strdup(" ");
    Test_cases[6].expected = strdup("1337 future is loading");

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char purple[] = "\x1b[35m";
    char yellow[] = "\033[1;33m";
    char color_close[] = "\x1b[0m";
    char orange[] = "\x1b[38;5;208m";
    char color[15];

    printf("%s", orange);
    printf("\t\t███████╗███████╗░█████╗░██╗░░██╗░░░░░░░█████╗░██╗░░██╗██╗\n");
    printf("\t\t╚════██║██╔════╝██╔══██╗██║░░██║░░░░░░██╔══██╗██║░░██║██║\n");
    printf("\t\t░░███╔═╝█████╗░░██║░░╚═╝███████║█████╗██║░░╚═╝███████║██║\n");
    printf("\t\t██╔══╝░░██╔══╝░░██║░░██╗██╔══██║╚════╝██║░░██╗██╔══██║██║\n");
    printf("\t\t███████╗███████╗╚█████╔╝██║░░██║░░░░░░╚█████╔╝██║░░██║██║\n");
    printf("\t\t╚══════╝╚══════╝░╚════╝░╚═╝░░╚═╝░░░░░░░╚════╝░╚═╝░░╚═╝╚═╝\n\n");
    printf("%s", color_close);

    for (int i = 0; i < Test_cases_size; i++)
    {
        usleep(700 * 1000);
        printf("%s**************************************** test %d ****************************************%s\n", yellow, i + 1, color_close);
        printf("%s#%s", yellow, color_close);
        printf(" test case       : %ss = \"%s\"%s", purple, Test_cases[i].s1, color_close);
        printf(", %sset = \"%s\"%s\n", purple, Test_cases[i].set, color_close);
        char *your_output = ft_strtrim(Test_cases[i].s1, Test_cases[i].set);
        int diff = strcmp(your_output, Test_cases[i].expected);

        if (diff)
            strcpy(color, red);
        else
            strcpy(color, green);
        
        printf("%s#%s", yellow, color_close);
        printf(" your output     : %s\"%s\"%s\n", color, your_output, color_close);

        printf("%s#%s", yellow, color_close);
        printf(" expected output : %s\"%s\"%s\n", green, Test_cases[i].expected, color_close);

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

    for (int i = 0; i < Test_cases_size; i++)
    {
        free(Test_cases[i].s1);
        free(Test_cases[i].set);
        free(Test_cases[i].expected);
    }
    return (0);
}
