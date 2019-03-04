/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:18:48 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/08 20:29:36 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(newstr = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i++;
	}
	return (newstr);
}
