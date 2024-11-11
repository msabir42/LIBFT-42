/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:03:44 by msabir            #+#    #+#             */
/*   Updated: 2024/10/27 11:03:46 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*arr;

	i = 0;
	a = (unsigned char)c;
	arr = (unsigned char *)s;
	while (arr[i] != '\0' && i < n)
	{
		if (arr[i] == a)
		{
			return ((void *)&arr[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char m[] = "holaholbooool";
//     int n = 98;
//     printf("    %s\n", ft_memchr(m, n, 14));
// }