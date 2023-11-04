/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:14:42 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/04 23:29:33 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//void	ft_print_int_linked_list(t_list **head)
//{
//	t_list *cur_node = *head;
//	printf("head ");
//	while (cur_node)
//	{
//		printf("-> %d ", *((int *)(cur_node->content)));
//		cur_node = cur_node->next;
//	}
//	printf("-> NULL\n");
//}

//int main()
//{
//	int i1 = 55;
//	int i2 = 4675;
//	int i3 = 84;
//	int i4 = 472;

	
//	t_list *node1 = ft_lstnew(&i1);
//	t_list *node2 = ft_lstnew(&i2);
//	t_list *node3 = ft_lstnew(&i3);
//	t_list *node4 = ft_lstnew(&i4);
//	t_list *head = node1;
//	ft_print_int_linked_list(&head);
//	ft_lstadd_front(&head, node2);
//	ft_print_int_linked_list(&head);
//	ft_lstadd_front(&head, node3);
//	ft_print_int_linked_list(&head);
//	ft_lstadd_front(&head, node4);
//	ft_print_int_linked_list(&head);
//	return (0);
//}