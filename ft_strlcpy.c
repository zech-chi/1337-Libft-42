/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:37:16 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/01 21:45:14 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
//int main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
//	char dest1[atoi(av[1])];
//	char dest2[atoi(av[1])];
//	printf("%lu\n", sizeof(dest1));
//	printf("%lu\n", sizeof(dest2));
//	printf("------ my output -------\n");
//	size_t ans1 = ft_strlcpy(dest1, av[2], sizeof(dest1));
//	printf("dest : %s\n", dest1);
//	printf("src  : %s\n", av[2]);
//	printf("size : %lu\n", ans1);
//	printf("------ expected -------\n");
//	size_t ans2 = strlcpy(dest2, av[2], sizeof(dest2));
//	printf("dest : %s\n", dest2);
//	printf("src  : %s\n", av[2]);
//	printf("ans  : %lu\n", ans2);
//	return (0);
//}