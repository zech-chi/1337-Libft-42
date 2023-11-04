/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:25:49 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 19:05:54 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int main(int ac, char **av)
//{
//	int arr1[] = {1, 2, 3, 4, 5, 6, 7};
//	int arr2[] = {1, 2, 3, 4, 5, 6, 7};
//	printf("------ test1 ------\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");
//	ft_bzero(arr1, sizeof(arr1));
//	bzero(arr2, sizeof(arr2));
//	printf("------ my output ----\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");
//	printf("------ expected -----\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d, ", arr1[i]);
//	printf("\n");
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	printf("------ test2 ------\n");
//	printf("%s", str1);
//	printf("\n");
//	ft_bzero(str1, sizeof(str1));
//	bzero(str2, sizeof(str2));
//	printf("------ my output ----\n");
//	printf("%s", str1);;
//	printf("\n");
//	printf("------ expected -----\n");
//	printf("%s", str2);
//	printf("\n");
//	return (0);
//}