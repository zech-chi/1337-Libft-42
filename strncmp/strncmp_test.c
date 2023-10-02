#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

struct Test {
    char *s1;
    char *s2;
    int n;
};

int main()
{
    struct Test Test_cases[11];

    // test_case 1
    Test_cases[0].s1 = strdup("hello world");
    Test_cases[0].s2 = strdup("hello");
    Test_cases[0].n = 0;

    // test_case 2
    Test_cases[1].s1 = strdup("hello world");
    Test_cases[1].s2 = strdup("hello");
    Test_cases[1].n = 5;

    // test_case 3
    Test_cases[2].s1 = strdup("hello world");
    Test_cases[2].s2 = strdup("hello");
    Test_cases[2].n = 6;

    // test_case 4
    Test_cases[3].s1 = strdup("hello world");
    Test_cases[3].s2 = strdup("hello");
    Test_cases[3].n = 7;

    // test_case 5
    Test_cases[4].s1 = strdup("");
    Test_cases[4].s2 = strdup("");
    Test_cases[4].n = 0;

    // test_case 6
    Test_cases[5].s1 = strdup("");
    Test_cases[5].s2 = strdup("");
    Test_cases[5].n = 1;

    // test_case 7
    Test_cases[6].s1 = strdup("");
    Test_cases[6].s2 = strdup("hello");
    Test_cases[6].n = 0;

    // test_case 8
    Test_cases[7].s1 = strdup("");
    Test_cases[7].s2 = strdup("hello");
    Test_cases[7].n = 2;

    // test_case 9
    Test_cases[8].s1 = strdup("1337");
    Test_cases[8].s2 = strdup("1337");
    Test_cases[8].n = 3;

    // test_case 10
    Test_cases[9].s1 = strdup("1337");
    Test_cases[9].s2 = strdup("1337");
    Test_cases[9].n = 42;

    // test_case 11
    Test_cases[10].s1 = strdup("1337 the best school");
    Test_cases[10].s2 = strdup("1337 future is loading");
    Test_cases[10].n = 1337;

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char purple[] = "\x1b[35m";
    char orange[] = "\x1b[38;5;208m";

    char color_close[] = "\x1b[0m";
    

    for (int i = 0; i < 11; i++)
    {
        int your_output = ft_strncmp(Test_cases[i].s1, Test_cases[i].s2, Test_cases[i].n);
        int expected_output = strncmp(Test_cases[i].s1, Test_cases[i].s2, Test_cases[i].n);

        printf("test: %d| ", i + 1);
        printf("test_case: %ss1 = \"%s\"%s, ", purple, Test_cases[i].s1, color_close);
        printf("%ss2 = \"%s\"%s, ", purple, Test_cases[i].s2, color_close);
        printf("%sn = %d%s | ", orange, Test_cases[i].n, color_close);

        if (your_output == expected_output)
        {
            printf("your output : %s%d%s | ", green, your_output, color_close);
            printf("expected output : %s%d%s | ", green, expected_output, color_close);
            printf("✅\n");
        }
        else
        {
            printf("your output : %s%d%s | ", red, your_output, color_close);
            printf("expected output : %s%d%s | ", green, expected_output, color_close);
            printf("❌\n");
        }
    }

    // free the allocated memory
    for (int i = 0; i < 11; i++) {
        free(Test_cases[i].s1);
        free(Test_cases[i].s2);
    }
    return (0);
}