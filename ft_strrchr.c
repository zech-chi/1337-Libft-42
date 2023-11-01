/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:16:43 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/01 20:36:42 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;
	size_t	i;

	last = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last == 0 && s[0] != c)
		return (0);
	return ((char *)(s + last));
}
