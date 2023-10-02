#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_itoa(int n);

struct Test {
    char *s;
    int n;
};

int main()
{
    struct Test Test_cases[8];

    // test_case 1
    Test_cases[0].s = strdup("0");
    Test_cases[0].n = 0;

    // test_case 2
    Test_cases[1].s = strdup("1");
    Test_cases[1].n = 1;

    // test_case 3
    Test_cases[2].s = strdup("-1");
    Test_cases[2].n = -1;

    // test_case 4
    Test_cases[3].s = strdup("42");
    Test_cases[3].n = 42;
    
    // test_case 5
    Test_cases[4].s = strdup("1337");
    Test_cases[4].n = 1337;

    // test_case 6
    Test_cases[5].s = strdup("-4011");
    Test_cases[5].n = -4011;

    // test_case 7
    Test_cases[6].s = strdup("-2147483648");
    Test_cases[6].n = -2147483648;
    
    // test_case 8
    Test_cases[7].s = strdup("2147483647");
    Test_cases[7].n = 2147483647;

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char orange[] = "\x1b[38;5;208m";
    char yellow[] = "\033[1;33m";

    char color_close[] = "\x1b[0m";

    for (int i = 0; i < 8; i++)
    {
        char *your_output = ft_itoa(Test_cases[i].n);
        int diff = strcmp(your_output, Test_cases[i].s);
        printf("%s**************************************** test %d ****************************************%s\n", yellow, i + 1, color_close);
        printf("%s#%s", yellow, color_close);
        printf(" test_case       : %sn = %d%s\n", orange, Test_cases[i].n, color_close);
        if (diff == 0)
        {
            printf("%s#%s", yellow, color_close);
            printf(" your output     : %s\"%s\"%s\n", green, your_output, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" expected output : %s\"%s\"%s\n", green, Test_cases[i].s, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" status          : ✅\n");
        }
        else
        {
            printf("%s#%s", yellow, color_close);
            printf(" your output     : %s\"%s\"%s\n", red, your_output, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" expected output : %s\"%s\"%s\n", green, Test_cases[i].s, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" status          : ❌\n");
        }
    }
    printf("%s****************************************************************************************%s\n", yellow, color_close);
    // free the allocated memory
    for (int i = 0; i < 8; i++) {
        free(Test_cases[i].s);
    }
    return (0);
}