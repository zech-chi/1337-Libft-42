#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}


int ft_is_exist(const char *s, char c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    long long len;
    long long left;
    long long right;
    size_t size;
    long long i;
    char *res;

    len = ft_strlen(s1);
    left = 0;
    while (left < len && ft_is_exist(set, s1[left]))
        left++;
    right = len - 1;
    while (right >= 0 && ft_is_exist(set, s1[right]))
        right--;
    if (left > right)
        size = 0;
    else
        size = right - left + 1;
    res = malloc((size + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    i = 0;
    while ((left + i) <= right)
    {
        res[i] = s1[left + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

// int main(int ac, char **av)
// {
//     if (ac != 3)
//         return (0);

//     char *res = ft_strtrim(av[1], av[2]);
//     printf("\"%s\"\n", res);
//     if (res != NULL)
//         free(res);
//     return (0);
// }