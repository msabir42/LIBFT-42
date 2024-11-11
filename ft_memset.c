/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:20:33 by msabir            #+#    #+#             */
/*   Updated: 2024/10/22 18:20:36 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int b, size_t len)
{
	unsigned char *source = (unsigned char *)s;
	size_t i;
	i = 0;
	while (i < len)
	{
		source[i] = b;
		i++;
	}
	return (source);
}