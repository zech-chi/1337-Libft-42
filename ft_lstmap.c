/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:50:38 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/05 01:00:20 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*cur_node_old;
	t_list	*cur_node_new;

	head = NULL;
	cur_node_old = lst;
	while (cur_node_old)
	{
		cur_node_new = ft_lstnew((*f)(cur_node_old->content));
		if (cur_node_new == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, cur_node_new);
		cur_node_old = cur_node_old->next;
	}
	return (head);
}