#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(const char *s);

int main()
{
    char tests[8][50];
    strcpy(tests[0], "");
    strcpy(tests[1], "1337");
    strcpy(tests[2], "1337 future is loading");
    strcpy(tests[3], "we are samurai the keyboard cowboys");
    strcpy(tests[4], "it seems impossible until it's done");
    strcpy(tests[5], "1,000");
    strcpy(tests[6], "1,000,000");
    strcpy(tests[7], "1,000,000,000");

    char green[] = "\x1b[32m";
    char red[] = "\x1b[31m";
    char orange[] = "\x1b[38;5;208m";
    char purple[] = "\x1b[35m";
    char color_close[] = "\x1b[0m";

    for (int i = 0; i < 8; i++)
    {
        char *your_output = ft_strdup(tests[i]);
        char *expected_output = strdup(tests[i]);
        int diff = strcmp(your_output, expected_output);
        printf("**************************************** test %d ****************************************\n", i + 1);
        // print test case
        printf("# test case       : %s\"%s\"%s\n", purple, tests[i], color_close);
        if (diff == 0)
        {
            printf("# your output     : %s\"%s\"%s\n", green, your_output, color_close);
            printf("# expected output : %s\"%s\"%s\n", green, expected_output, color_close);
            printf("# status          : ✅\n");
        }
        else
        {
            printf("# your output     : %s\"%s\"%s\n", red, your_output, color_close);
            printf("# expected output : %s\"%s\"%s\n", green, expected_output, color_close);
            printf("# status          : ❌\n");
        }
    }
    printf("****************************************************************************************\n");
    return (0);
}