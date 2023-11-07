/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:49:46 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/07 08:22:07 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == 0)
		return ((char *) haystack);
	h = 0;
	while (haystack[h] && h < len)
	{
		n = 0;
		while (needle[n] && haystack[h + n] && needle[n] == haystack[h + n]
			&& (h + n) < len)
			n++;
		if (needle[n] == 0)
			return ((char *)(haystack + h));
		h++;
	}
	return (0);
}
