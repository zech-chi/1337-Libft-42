/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:37:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 19:13:17 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcat(ptr, s1, size + 1);
	ft_strlcat(ptr, s2, size + 1);
	return (ptr);
}
