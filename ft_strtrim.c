/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:05 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/06 20:12:29 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_exist(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_size(char const *s1, char const *set, size_t *left, size_t *right)
{
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	*left = 0;
	*right = s1_len - 1;
	while (*left < s1_len && is_exist(set, s1[*left]))
		*left += 1;
	if (*left == s1_len)
		return (0);
	while (*right >= 0 && is_exist(set, s1[*right]))
		*right -= 1;
	return (*right - *left + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	left;
	size_t	right;
	char	*ptr;

	size = get_size(s1, set, &left, &right);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	if (size == 0)
	{
		ptr[0] = 0;
		return (ptr);
	}
	i = 0;
	while (left <= right)
		ptr[i++] = s1[left++];
	ptr[i] = 0;
	return (ptr);
}
