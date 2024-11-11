/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:39:12 by msabir            #+#    #+#             */
/*   Updated: 2024/10/24 13:39:15 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *to, const void *from, int len)
{
	int		i;
	int		j;
	char	*orig;
	char	*copy;
	char	temp[len];

	i = 0;
	j = 0;
	orig = (char *)from;
	copy = (char *)to;
	while (orig[i] != '\0' && i < len)
	{
		temp[i] = orig[i];
		i++;
	}
	i++;
	while (temp[j] != '\0' && j < len)
	{
		copy[j] = temp[j];
		j++;
	}
	j++;
	return (copy);
}
