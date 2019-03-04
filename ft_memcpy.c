/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:44:50 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/05 16:00:16 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptrr;

	ptr = (char *)dst;
	ptrr = (char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptrr[i];
		i++;
	}
	return (dst);
}
