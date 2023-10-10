#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}

// int main(int ac, char **av)
// {
//     if (ac != 4)
//         return (0);
    
//     printf("o: %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
//     printf("e: %d\n", strncmp(av[1], av[2], atoi(av[3])));
//     return (0);
// }