/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:21:45 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/05 01:44:42 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	size = ft_strlen(s) - start;
	if (len < size)
		size = len;
	ptr = malloc((size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
