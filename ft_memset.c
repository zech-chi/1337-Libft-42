/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:27:18 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/02 19:35:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
//int main(int ac, char **av)
//{
//	int arr1[] = {1, 2, 3, 4, 5, 6, 7};
//	int arr2[] = {1, 2, 3, 4, 5, 6, 7};


//	printf("------ test1 ------\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");

//	ft_memset(arr1, 0, 4 * sizeof(arr1[0]));
//	memset(arr2, 0, 4 * sizeof(arr2[0]));
	
//	printf("------ my output ----\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");
//	printf("------ expected -----\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");
//	return (0);
//}