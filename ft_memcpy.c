/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:13:47 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 16:28:49 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

//int main()
//{
//	char dest1[30];
//	char dest2[30];
//	char src[] = "ijfj difjif id";

//	ft_memcpy(dest1, src, 12);
//	memcpy(dest2, src, 12);
//	printf("my: %s\n", dest1);
//	printf("ex: %s\n", dest2);
//	return (0);
//}
//

//int main()
//{
//	char str1[] = "hello world form 1337";
//	char str2[] = "hello world form 1337";

//	ft_memcpy(str1 + 6, str1, 8);
//   	ft_memmove(str2 + 6, str2, 8);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return (0);
//}
