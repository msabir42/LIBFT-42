/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:40:13 by msabir            #+#    #+#             */
/*   Updated: 2024/11/06 21:40:14 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		t_list *last = *lst;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new;
	}
}