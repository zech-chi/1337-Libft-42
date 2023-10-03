#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


size_t ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t  ft_min(size_t n, size_t m)
{
    if (n < m)
        return (n);
    return (m);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len;
    char    *new_s;
    unsigned int    i;
    size_t  new_s_len;

    s_len = ft_strlen(s);
    if (start >= s_len || len == 0)
    {
        new_s = malloc(sizeof(char));
        new_s[0] = 0;
        return (new_s);
    }
    new_s_len = ft_min(len, s_len - start);
    new_s = malloc((new_s_len + 1) * sizeof(char));
    if (new_s == NULL)
        return (NULL);
    i = 0;
    while (i < new_s_len)
    {
        new_s[i] = s[start + i];
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}

// int main(int ac, char **av)
// {
//     if (ac != 4)
//         return (0);
    
//     char *s = av[1];
//     unsigned int start = atoi(av[2]);
//     size_t len = atoi(av[3]);
//     char *res = ft_substr(s, start, len);
//     printf("%s\n", res);
//     if (res != NULL)
//         free(res);

//     printf("%ld\n", max_size);
//     return (0);
// }
