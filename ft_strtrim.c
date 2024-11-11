/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:07:27 by msabir            #+#    #+#             */
/*   Updated: 2024/10/30 15:07:29 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	start = 0;
	end = ft_strlen(s1);
	// Move `start` forward to skip all characters in `set`
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	// Move `end` backward to skip all characters in `set`
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	// Allocate memory for the trimmed string
	trimmed_str = malloc(end - start + 1);
	if (!trimmed_str)
		return (NULL);
	// Copy the trimmed portion of `s1` into `trimmed_str`
	ft_strlcpy(trimmed_str, &s1[start], end - start);
	return (trimmed_str);
}
