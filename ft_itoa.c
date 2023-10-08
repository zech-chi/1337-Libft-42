#include <stdlib.h>
#include <stdio.h>

int ft_calculate_len(int n)
{
    int len;
    long long   ln;

    ln = n;
    len = 0;
    if (ln == 0)
        return (1);
    if (ln < 0)
    {
        ln *= -1;
        len++;
    }
    while (ln)
    {
        len++;
        ln /= 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int size;
    char    *res;
    int i;
    long long   ln;

    size = ft_calculate_len(n);
    res = malloc((size + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    ln = n;
    if (ln == 0)
    {
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
    else if (ln < 0)
    {
        res[0] = '-';
        ln *= -1;
    }
    i = size - 1;
    while (ln)
    {
        res[i] = ln % 10 + '0';
        ln /= 10;
        i--;
    }
    res[size] = '\0';
    return (res);
}

