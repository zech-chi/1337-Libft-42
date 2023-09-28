int ft_isalnum(int c)
{
    if (('a' <= c && c <= 'z')
    || ('A' <= c && c <= 'Z')
    || ('0' <= c && c <= '9'))
        return (1);
    return (0);
}