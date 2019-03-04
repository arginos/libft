/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:45:38 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/06 10:51:25 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstt;
	size_t		i;
	const char	*srcc;

	i = 0;
	dstt = (char *)dst;
	srcc = (char *)src;
	if (dstt > srcc)
	{
		while ((int)len-- > 0)
			dstt[len] = srcc[len];
	}
	else
	{
		while (len > i)
		{
			dstt[i] = srcc[i];
			i++;
		}
	}
	return ((void *)dst);
}
