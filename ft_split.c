/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:49:42 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/02 12:56:13 by zech-chi         ###   ########.fr       */
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

void	free_ans(char	**ans, size_t	size)
{
	size_t	i;

	if (size == 0)
		return;
	i = 0;
	while (i < size)
		free(ans[i++]);
	free(ans);
	return;
}

char	**fill_ans(char **ans, char const *s, char c)
{
	size_t	left;
	size_t	right;
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
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
			free_ans(ans, i);
			break;
		}
		j = 0;
		while (left < right)
			ans[i][j++] = s[left++];
		i++;
	}
	ans[i] = 0;
	return (ans);
}

char **ft_split(char const *s, char c)
{
	char	**ans;
	int		n_words;

	n_words = count_words(s, c);
	ans = malloc((n_words + 1) * sizeof(char *));
	if (ans == NULL)
		return (NULL);
	fill_ans(ans, s, c);
	return (ans);
}

//int main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
//	char **ans = ft_split(av[1], av[2][0]);
//	int i = 0;
//	while (ans[i])
//	{
//		printf("%s\n", ans[i]);
//		i++;
//	}
//	return (0);
//}
