#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main()
{
    char green_open[] = "\x1b[32m";
    char green_close[] = "\x1b[0m";
    char red_open[] = "\x1b[31m";
    char red_close[] = "\x1b[0m";
    char purple_open[] = "\x1b[35m";
    char purple_close[] = "\x1b[0m";
    char orange_open[] = "\x1b[38;5;208m";
    char orange_close[] = "\x1b[0m";

    for (int i = 0; i <= 127; i++)
    {
        int your_output = ft_isprint(i);
        int expected_output = isprint(i);
        if (expected_output)
            expected_output = 1;
        
        printf("test: %d | ", i + 1);
        printf("ascii: %d | ", i);
        char c = i;
        if (i < 32 || i == 127)
            printf("test case : %snonprintable char%s | ", orange_open, orange_close);
        else
            printf("test case : %s'%c'%s | ", purple_open, c, purple_close);
        
        if (your_output == 0)
            printf("your output : %s%d%s | ", red_open, your_output, red_close);
        else
            printf("your output : %s%d%s | ", green_open, your_output, green_close);
        
        if (expected_output == 0)
            printf("expected output : %s%d%s | ", red_open, expected_output, red_close);
        else
            printf("expected output : %s%d%s | ", green_open, expected_output, green_close);

        if (your_output == expected_output)
            printf("✅\n");
        else
            printf("❌\n");
    }
    return (0);
}