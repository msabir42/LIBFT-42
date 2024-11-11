/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:09 by msabir            #+#    #+#             */
/*   Updated: 2024/11/04 16:32:13 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_subs(char *s, char c)
{
	int	count;
	int	i;
	int	in_subs;

	count = 0;
	i = 0;
	in_subs = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_subs == 0)
		{
			in_subs = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_subs = 0;
		}
		i++;
	}
	return (count);
}
char	**ft_split(const char *s, char c)
{
	int total = count_subs(s, c);
	char **array;
	array = malloc(sizeof(char *) * (total + 1));
	if (!array)
	{
		return (NULL);
	}
	int i;
	i = 0;
	int index;
	index = 0;
	int len;
	while (s[i] != '\0')
	{
		int start;
		int end;
		while (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] == '\0')
		{
			break ;
		}
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
		end = i;
		len = end - start;

		array[index] = malloc(sizeof(char) * (len + 1));
		if (array[index] == NULL)
		{
			int j;
			j = 0;
			while (j < index)
			{
				free(array[j]);
				j++;
			}
			free(array);
			return (NULL);
		}
		ft_strlcpy(array[index], &s[start], len + 1);
		array[index][len] = '\0';
		index++;
	}
	array[index] = NULL;
	return (array);
}