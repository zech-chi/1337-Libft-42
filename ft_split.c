/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:49:42 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 23:11:08 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
	free(ptr);
}

int	get_current_word(char const *s, char c, size_t *left, char *temp)
{
	size_t	right;
	size_t	col;

	while (s[*left] && s[*left] == c)
		(*left)++;
	if (s[*left] == 0)
		return (0);
	right = *left;
	while (s[right] && s[right] != c)
		right++;
	temp = malloc(right - (*left) + 1);
	if (temp == NULL)
		return (-1);
	col = 0;
	while (*left < right)
		temp[col++] = s[(*left)++]; 
	temp[col] = 0;
	return (1);
}

void	fill_ptr(char **ptr, char const *s, char c)
{
	size_t	left;
	size_t	row;
	char	*temp;
	int		status;

	row = 0;
	left = 0;
	temp = NULL;
	while (s[left])
	{
		status = get_current_word(s, c, &left, temp);
		if (status == 0)
			break ;
		else if (status == -1)
		{
			free_ptr(ptr, row);
			return ;
		}
		ptr[row++] = temp;
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
	fill_ptr(ptr, s, c);
	return (ptr);
}

//int main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
//	char **ptr = ft_split(av[1], av[2][0]);
//	if (ptr == NULL)
//		return (0);
//	size_t i = 0;
//	while (ptr[i])
//	{
//		printf("\"%s\"\n", ptr[i]);
//		i++;
//	}
//	return (0);
//}