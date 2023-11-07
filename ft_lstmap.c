/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:50:38 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/07 15:21:36 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*old;
	t_list	*new;
	void	*new_content;

	head = NULL;
	new = NULL;
	old = lst;
	while (old)
	{
		new_content = (*f)(old->content);
		new = ft_lstnew(new_content);
		if (new == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		old = old->next;
	}
	return (head);
}
