#include <stdio.h>

int ft_isspace(char c)
{
    if (('\t' <= c && c <= '\r') || c == ' ')
        return (1);
    return (0);
}

int ft_atoi(const char *nptr)
{
    int signe;
    int res;

    signe = 1;
    res = 0;
    while (ft_isspace(*nptr))
        nptr++;
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
            signe *= -1;
        nptr++;
    }
    while ('0' <= *nptr && *nptr <= '9')
    {
        res = res * 10 + *nptr - '0';
        nptr++;
    }
    return (res * signe);
}
