#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}


size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
	size_t src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return src_len;
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// size_t	ft_strlcpy2(char *dest, const char *src, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	if (size)
// 	{
// 		while (src[i] && i < size - 1)
// 		{
// 			dest[i] = src[i];
// 			i++;
// 		}
// 		dest[i] = 0;
// 	}
// 	while (src[i])
// 		i++;
// 	return (i);
// }

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);
// 	size_t size = atoi(av[1]);
// 	char dest1[size];
// 	char dest2[size];
// 	char *src = av[2];

// 	printf("size of dest: %ld\n", sizeof(dest1));
// 	printf("src = \"%s\"\n\n", src);

// 	// your output:
// 	printf("your output: \n");
// 	size_t res1 = ft_strlcpy(dest1, src, sizeof(dest1));
// 	printf("dest = \"%s\"\n", dest1);
// 	printf("returned : %ld\n", res1);
// 	printf("\n");
// 	// expected output:
// 	printf("expected output\n");
// 	size_t res2 = ft_strlcpy2(dest2, src, sizeof(dest2));
// 	printf("dest = \"%s\"\n", dest2);
// 	printf("returned : %ld\n", res2);
	
// 	return (0);
// }