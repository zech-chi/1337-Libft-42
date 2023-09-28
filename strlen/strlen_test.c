#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

int main()
{
    char green_open[] = "\x1b[32m";
    char green_close[] = "\x1b[0m";
    char red_open[] = "\x1b[31m";
    char red_close[] = "\x1b[0m";
    char purple_open[] = "\x1b[35m";
    char purple_close[] = "\x1b[0m";


    char tests[5][40];
    strcpy(tests[0], "");
    strcpy(tests[1], "1337");
    strcpy(tests[2], "future is loading");
    strcpy(tests[3], "we are samurai the keyboard cowboys");
    strcpy(tests[4], "it seems impossible until it's done");


    for (int i = 0; i <= 4; i++)
    {
        size_t your_output = ft_strlen(tests[i]); 
        size_t expected_output = strlen(tests[i]);

        printf("test: %d | ", i + 1);
        printf("test case : %s\"%s\"%s | ", purple_open, tests[i], purple_close);

        if (your_output == expected_output)
        {
            printf("your output : %s%ld%s | ", green_open, your_output, green_close);
            printf("expected output : %s%ld%s | ", green_open, expected_output, green_close);
            printf("✅\n");
        }
        else
        {
            printf("your output : %s%ld%s | ", red_open, your_output, red_close);
            printf("expected output : %s%ld%s | ", green_open, expected_output, green_close);
            printf("❌\n");
        }
    }
    return (0);
}