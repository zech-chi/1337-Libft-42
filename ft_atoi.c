/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:45:58 by zech-chi          #+#    #+#             */
/*   Updated: 2023/10/31 15:58:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	this function take a char
	and return 1 if it is a whitespace 0 otherwise
	' ' : (ascii == 32) space 
	'\n': (ascii == 10) newline 
	'\t': (ascii == 9) tab 
	'\v': (ascii == 11) virtical tab 
	'\r': (ascii == 13) carriage return <he carriage return character is used 
		to move the cursor or print head back to the beginning of the current 
		line or text> 
	'\f': (ascii = 12) The form feed character <advance to the top of the
		next page> 
*/
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n'
		|| c == '\t' || c == '\v'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}

/*
	1)
	signe == 1 ---> result positive
	signe == -1 ---> result negative

	2)
	res = wxyz {
		w = 10 * 10 * 10
	+	x * 10 * 10
	+ 	y * 10
	+   z 
	}

	3)
	'0' - '0' = 0
	'1' - '0' = 1
	'2' - '0' = 2
	'7' - '0' = 7
	generally : 'n' - '0' = n  ('0' <= n <= '9')
*/
int	ft_atoi(const char *str)
{
	int	res;
	int	signe;
	int	i;

	res = 0;
	signe = 1;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	return (signe * res);
}
