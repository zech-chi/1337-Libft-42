/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:25:49 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/05 00:33:04 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur_node;
	t_list	*nxt_node;

	cur_node = *lst;
	while (cur_node)
	{
		nxt_node = cur_node->next;
		(*del)(cur_node->content);
		free(cur_node);
		cur_node = nxt_node;
	}
	*lst = NULL;
}