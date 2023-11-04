/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:33:59 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 23:36:00 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *cur_node;
	int	counter;

	cur_node = lst;
	counter = 0;
	while (cur_node)
	{
		counter++;
		cur_node = cur_node->next;
	}
	return (counter);
}