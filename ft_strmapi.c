/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:52:15 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/03 18:14:06 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	size_t	i;
	char	*ptr;

	size = ft_strlen(s);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

//char change(unsigned int i, char c)
//{
//	if ('a' <= c && c <= 'z')
//		return (c - 32);
//	return (c);
//}

//int main()
//{
//	char (*f)(unsigned int, char);
//	f = change;
//	char *ans = ft_strmapi("HEllO", f);
//	printf("%s\n", ans);
//	return (0);
//}