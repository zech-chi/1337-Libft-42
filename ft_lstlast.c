/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:49:47 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/05 01:08:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur_node;

	cur_node = lst;
	if (cur_node == NULL)
		return (NULL);
	while (cur_node->next)
		cur_node = cur_node->next;
	return (cur_node);
}
