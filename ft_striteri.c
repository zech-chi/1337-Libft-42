/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:22:14 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/03 18:29:20 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

//void	change(unsigned int i, char *c)
//{
//	*c += i;
//}

//int main()
//{
//	char str[] = "HELLO";
//	void (*f)(unsigned int, char *);
//	f = change;
//	ft_striteri(str, f);
//	printf("%s\n", str);
//	return (0);
//}