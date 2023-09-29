#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

int main()
{
    char green_open[] = "\x1b[32m";
    char green_close[] = "\x1b[0m";
    char red_open[] = "\x1b[31m";
    char red_close[] = "\x1b[0m";
    char purple_open[] = "\x1b[35m";
    char purple_close[] = "\x1b[0m";

    for (int i = 0; i <= 127; i++)
    {
        int your_output = ft_toupper(i);
        int expected_output = toupper(i);

        printf("test: %d | ", i + 1);
        printf("test case (ascii) : %s%d%s | ", purple_open, i, purple_close);
            
        if (your_output == expected_output)
        {
            printf("your output : %s%d%s | ", green_open, your_output, green_close);
            printf("expected output : %s%d%s | ", green_open, expected_output, green_close);
            printf("✅\n");
        }
        else
        {
            printf("your output : %s%d%s | ", red_open, your_output, red_close);
            printf("expected output : %s%d%s | ", green_open, expected_output, green_close);
            printf("❌\n");
        }
    }
    return (0);
}