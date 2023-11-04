/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:06:07 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 16:19:43 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	temp[len];

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	return (dst);
}

//int main()
//{
//	char str[] = "hello world";
//	memmove(str + 7, str, 5);
//	printf("%s\n", str);
//	return (0);
//}