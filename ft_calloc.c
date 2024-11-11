/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:04:24 by msabir            #+#    #+#             */
/*   Updated: 2024/10/28 16:04:26 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
    int i;
    int len;
    len = size * count;
    i = 0;
    unsigned char *tmp;
    tmp =malloc(len);
    if (!tmp)
    {
        return (NULL);
    }
    ft_memset(tmp,0,len);
    return (tmp);
}