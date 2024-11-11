/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:59:50 by msabir            #+#    #+#             */
/*   Updated: 2024/10/27 11:59:53 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *right = (unsigned char *)s1;
	unsigned char *left = (unsigned char *)s2;

	size_t i;
	size_t r;
	i = 0;
	while (right[i] != '\0' && left[i] != '\0' && i < n)
	{
		r = right[i] - left[i];
		i++;
	}
	return (r);
}