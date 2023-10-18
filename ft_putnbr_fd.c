#include <unistd.h>
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



void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}

// just call itoa and ft_putstr_fd

void ft_putnbr_fd(int n, int fd)
{
    ft_putstr_fd(ft_itoa(n), fd);
}