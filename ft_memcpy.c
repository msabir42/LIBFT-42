/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:28:45 by msabir            #+#    #+#             */
/*   Updated: 2024/10/23 16:28:47 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *to, const void *from, int len)
{
	int i;
	i = 0;
	char *orig = (char *)from;
	char *copy = (char *)to;
	while (orig[i] != '\0' && i < len)
	{
		copy[i] = orig[i];
		i++;
	}
	i++;
	copy[i] = '\0';
	return (copy);
}