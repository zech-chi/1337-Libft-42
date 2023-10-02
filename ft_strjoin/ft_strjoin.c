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

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  size;
    char    *res;
    size_t  i;
    size_t  j;

    size = ft_strlen(s1) + ft_strlen(s2) + 1; 
    res = malloc(size * sizeof(char));
    if (res == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[j])
        res[i++] = s1[j++];
    j = 0;
    while (s2[j])
        res[i++] = s2[j++];
    res[i] = '\0';
    return (res);
}
