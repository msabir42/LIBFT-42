/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:19:00 by msabir            #+#    #+#             */
/*   Updated: 2024/11/07 23:19:01 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *c;

	if (!lst || !f || !del)
	{
		return (NULL);
	}
	while ((lst))
	{
		t_list *new_node;
		void *new_content;

		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		if (!newlst)
		{
			newlst = new_node;
		}
		else
		{
			c->next = new_node;
		}
		c = new_node;
		lst = lst->next;
	}
	return (newlst);
}