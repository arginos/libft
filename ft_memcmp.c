/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:09:04 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/06 11:06:02 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s11;
	char	*s22;
	size_t	i;

	s11 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return ((unsigned char)s11[i] - (unsigned char)s22[i]);
		i++;
	}
	return (0);
}
