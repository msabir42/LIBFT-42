/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:59:07 by msabir            #+#    #+#             */
/*   Updated: 2024/11/02 18:59:09 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char max[12] = "-2147483648"; 
int	count(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}
void	*fill(char *s, int n, int size, int negative)
{
	while (size > 0)
	{
		if (negative && size == 1)
		{
			s[0] = '-';
			break ;
		}
		s[--size] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int size;
	int i;
	int negative;
	char *number;

	negative = 0;
	size = count(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		negative = 1;
		n = -n;
		size++;
	}
	number = malloc(sizeof(char) * (size + 1));
	if (!number)
		return (NULL);
	if (n == 0)
		return ("0");
	fill(number, n, size, negative);
	return (number);
}