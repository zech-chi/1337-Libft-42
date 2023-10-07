#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *nptr);

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

    char tests[14][35];
    strcpy(tests[0], "");
    strcpy(tests[1], " 1337");
    strcpy(tests[2]," 0001337");
    strcpy(tests[3], " -42");
    strcpy(tests[4], " +42");
    strcpy(tests[5], " --42");
    strcpy(tests[6], " ++42");
    strcpy(tests[7], " -+42");
    strcpy(tests[8], " +-42");
    strcpy(tests[9], "     +---+--+7");
    strcpy(tests[10], "2147483647");
    strcpy(tests[11], "-2147483648");
    strcpy(tests[12], "999999999999999");
    strcpy(tests[13], " \t\n\v\f\r  1337 future is loading");
    
    printf("%s", orange_open);
    printf("\t\t███████╗███████╗░█████╗░██╗░░██╗░░░░░░░█████╗░██╗░░██╗██╗\n");
    printf("\t\t╚════██║██╔════╝██╔══██╗██║░░██║░░░░░░██╔══██╗██║░░██║██║\n");
    printf("\t\t░░███╔═╝█████╗░░██║░░╚═╝███████║█████╗██║░░╚═╝███████║██║\n");
    printf("\t\t██╔══╝░░██╔══╝░░██║░░██╗██╔══██║╚════╝██║░░██╗██╔══██║██║\n");
    printf("\t\t███████╗███████╗╚█████╔╝██║░░██║░░░░░░╚█████╔╝██║░░██║██║\n");
    printf("\t\t╚══════╝╚══════╝░╚════╝░╚═╝░░╚═╝░░░░░░░╚════╝░╚═╝░░╚═╝╚═╝\n\n");
    printf("%s", red_close);

    for (int i = 0; i < 14; i++)
    {
        int your_output = ft_atoi(tests[i]);
        int expected_output = atoi(tests[i]);
        printf("test : %d | ", i + 1);
        // print test case
        printf("test case : \"");
        int j = 0;
        while (tests[i][j])
        {
            if (' ' <= tests[i][j] && tests[i][j] <= '~')
                printf("%s%c%s", purple_open, tests[i][j], purple_close);
            else
                printf("%s(%d)%s", orange_open, tests[i][j], orange_close);
            j++;
        }
        printf("\" | ");
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
    printf("\n⚠️  %s(9) = \\t | (10) = \\n | (11) = \\v | (12) = \\f | (13) = \\r%s\n", orange_open, orange_close);
    return (0);
}