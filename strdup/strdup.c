#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

char    *ft_strdup(const char *s)
{
    size_t  size;
    char    *res;
    size_t  i;

    size = ft_strlen(s);
    res = malloc((size + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    i = 0; 
    while (s[i])
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

// int main(int ac, char **av)
// {
//     if (ac != 2)
//         return (0);
//     char *res = ft_strdup(av[1]);
//     printf("%s\n", res);
//     printf("%s\n", strdup(av[1]));
//     free(res);
//     return (0);
// }