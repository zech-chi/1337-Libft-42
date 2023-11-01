/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:32:55 by zech-chi          #+#    #+#             */
/*   Updated: 2023/10/31 21:44:20 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	1) strdup: save a copy of a string
	2) we will use malloc
	3) for storing a copy of a string we need the lenght of that string
	4) we will allocate (length + 1) "+1" for '\0' at the end
*/

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		ptr[i] = s1[i];
	ptr[i] = '\0';
	return (ptr); 
}
