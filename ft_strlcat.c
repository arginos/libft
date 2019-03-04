/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:38:16 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/05 16:02:59 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;
	size_t	res;

	j = 0;
	while (dst[j] != '\0')
		j++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= j)
		res += size;
	else
		res += j;
	k = 0;
	while (src[k] != '\0' && j + 1 < size)
	{
		dst[j] = src[k];
		j++;
		k++;
	}
	dst[j] = '\0';
	return (res);
}
