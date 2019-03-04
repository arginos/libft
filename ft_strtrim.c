/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:36:36 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/11 19:38:22 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	len = ft_strlen(s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\t' ||
				s[len - 1] == '\n') && len > 1)
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len < 0)
		len = 0;
	if (!(new = (char *)malloc(sizeof(char) * (len) + 1)))
		return (0);
	while (j < len)
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}
