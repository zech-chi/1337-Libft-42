/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:47:16 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 19:13:53 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	d = dst_len;
	s = 0;
	while (src[s] && d < dstsize - 1)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (dst_len + src_len);
}

// int main(int ac, char **av)
//{
//	if (ac != 4)
//		return (0);
//	char dest1[atoi(av[1])];
//	strcpy(dest1, av[2]);
//	char dest2[atoi(av[1])];
//	strcpy(dest2, av[2]);
//	printf("------- before -------\n");
//	size_t ans1 = ft_strlcat(dest1, av[3], sizeof(dest1));
//	printf("dest become  : %s\n", dest1);
//	printf("returned size: %lu\n", ans1);
//	printf("------- my output ------\n");
//	size_t ans2 = strlcat(dest2, av[3], sizeof(dest2));
//	printf("------- expected -------\n");
//	printf("dest become  : %s\n", dest2);
//	printf("returned size: %lu\n", ans2);
//	return (0);
// }