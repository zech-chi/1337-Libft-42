#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_count_words(char const *s, char c)
{
    int count;
    int equal_to_c;
    size_t  i;

    count = 0;
    equal_to_c = 1;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            if (equal_to_c == 1)
                count++;
            equal_to_c = 0;
        }
        else
            equal_to_c = 1;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int size;
    char **res;
    size_t left;
    size_t right;
    size_t i;
    size_t j;

    size = ft_count_words(s, c);
    res = malloc((size + 1) * sizeof(char *));
    if (res == NULL)
        return (NULL);
    left = 0;
    i = 0;
    while (s[left])
    {
        while (s[left] && s[left] == c)
            left++;
        if (s[left] == '\0')
            break;
        right = left;
        while (s[right] && s[right] != c)
            right++;
        res[i] = malloc((right - left + 1) * sizeof(char));
        j = 0;
        while (left < right)
            res[i][j++] = s[left++];
        res[i][j] = '\0';
        i++;
    }
    res[i] = NULL;
    return (res);
}

// int main(int ac, char **av)
// {
//     if (ac != 3 || strlen(av[2]) != 1)
//         return (0);
    
//     char **res = ft_split(av[1], av[2][0]);
//     size_t i = 0;
//     while (res[i])
//         printf("%s\n", res[i++]);
//     return (0);
// }