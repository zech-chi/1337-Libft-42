#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2);

struct Test {
    char *s1;
    char *s2;
    char *expected;
};

int main()
{
    struct Test Test_cases[11];

    // test_case 1
    Test_cases[0].s1 = strdup("");
    Test_cases[0].s2 = strdup("");
    Test_cases[0].expected = strdup("");

    // test_case 2
    Test_cases[1].s1 = strdup("");
    Test_cases[1].s2 = strdup("world");
    Test_cases[1].expected = strdup("world");

    // test_case 3
    Test_cases[2].s1 = strdup("hello");
    Test_cases[2].s2 = strdup("");
    Test_cases[2].expected = strdup("hello");

    // test_case 4
    Test_cases[3].s1 = strdup("hello ");
    Test_cases[3].s2 = strdup("world");
    Test_cases[3].expected = strdup("hello world");

    // test_case 5
    Test_cases[4].s1 = strdup("1337 ");
    Test_cases[4].s2 = strdup("future is loading");
    Test_cases[4].expected = strdup("1337 future is loading");

    // test_case 6
    Test_cases[5].s1 = strdup("git add, git com");
    Test_cases[5].s2 = strdup("mit, git push");
    Test_cases[5].expected = strdup("git add, git commit, git push");

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char purple[] = "\x1b[35m";
    char yellow[] = "\033[1;33m";
    char color_close[] = "\x1b[0m";

    for (int i = 0; i < 6; i++)
    {
        char *your_output = ft_strjoin(Test_cases[i].s1, Test_cases[i].s2);
        int diff = strcmp(your_output, Test_cases[i].expected);
        printf("%s**************************************** test %d ****************************************%s\n", yellow, i + 1, color_close);
        printf("%s#%s", yellow, color_close);
        printf(" test case       : %ss1 = \"%s\"%s, ", purple, Test_cases[i].s1, color_close);
        printf("%ss2 = \"%s\"%s\n", purple, Test_cases[i].s2, color_close);
        if (diff == 0)
        {
            printf("%s#%s", yellow, color_close);
            printf(" your output     : %s\"%s\"%s\n", green, your_output, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" expected output : %s\"%s\"%s\n", green, Test_cases[i].expected, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" status          : ✅\n");
        }
        else
        {
            printf("%s#%s", yellow, color_close);
            printf(" your output     : %s\"%s\"%s\n", red, your_output, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" expected output : %s\"%s\"%s\n", green, Test_cases[i].expected, color_close);
            printf("%s#%s", yellow, color_close);
            printf(" status          : ❌\n");
        }
    }
    printf("%s****************************************************************************************%s\n", yellow, color_close);
    for (int i = 0; i < 6; i++)
    {
        free(Test_cases[i].s1);
        free(Test_cases[i].s2);
    }
    return (0);
}