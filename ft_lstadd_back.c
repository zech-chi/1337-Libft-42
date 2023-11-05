/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:56:39 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/05 01:06:49 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur_node;

	cur_node = *lst;
	if (cur_node == NULL)
	{
		*lst = new;
		return ;
	}
	while (cur_node->next)
		cur_node = cur_node->next;
	cur_node->next = new;
}
