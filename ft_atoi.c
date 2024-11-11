/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:43:27 by msabir            #+#    #+#             */
/*   Updated: 2024/10/28 12:43:31 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	isspaced(int c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
	{
		return (1);
	}
	return (0);
}
int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	i = 0;
	sign = 1;
	result = 0;
	while (isspaced(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + (str[i] - 48);
		i++;
	}
	result *= sign;
	return (result);
}