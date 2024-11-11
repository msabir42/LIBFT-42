/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:25:01 by msabir            #+#    #+#             */
/*   Updated: 2024/10/26 16:25:02 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int i;
	int size = ft_strlen(str);
	i = 0;

	while (str[size] != str[0])
	{
		if (str[size] == (char)search_str)
		{
			return ((char *)&str[size]);
		}
		size--;
	}
	if ((char)search_str == str[0])
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}