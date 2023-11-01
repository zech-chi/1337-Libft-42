/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:27:18 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/01 10:16:46 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
