/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:49:42 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/03 19:46:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	size_t	i;
	int		counter;
	int		is_equal_c;

	i = 0;
	counter = 0;
	is_equal_c = 1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		is_equal_c = 0;
		while (s[i] && s[i] != c)
		{
			if (is_equal_c == 0)
				counter++;
			is_equal_c = 1;
			i++;
		}
	}
	return (counter);
}

void	free_ptr(char **ptr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(ptr[i++]);
}

void	fill_ptr(char **ptr, size_t size, char const *s, char c)
{
	size_t	left;
	size_t	right;
	size_t	row;
	size_t	col;
	char	*temp;

	row = 0;
	left = 0;
	while (s[left])
	{
		while (s[left] && s[left] == c)
			left++;
		if (s[left] == 0)
			break;
		right = left;
		while (s[right] && s[right] != c)
			right++;
		temp = malloc(right - left + 1);
		if (temp == NULL)
		{
			free_ptr(ptr, row);
			free(ptr);
			return;
		}
		col = 0;
		while (left < right)
			temp[col++] = s[left++];
		temp[col] = 0;
		ptr[row] = temp;
		row++;
	}
	ptr[row] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**ptr;

	size = count_words(s, c);
	ptr = malloc((size + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);

	fill_ptr(ptr, size, s, c);
	return (ptr);
}

int main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	
	char **ptr = ft_split(av[1], av[2][0]);
	
	if (ptr == NULL)
		return (0);
	
	size_t i = 0;
	while (ptr[i])
	{
		printf("\"%s\"\n", ptr[i]);
		i++;
	}
	return (0);
}