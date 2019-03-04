/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:54:58 by asimonia          #+#    #+#             */
/*   Updated: 2018/11/11 19:55:54 by asimonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
		}
		count++;
	}
	return (count + 1);
}

static int	count(char const *s, char c, int i)
{
	int count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count + 1);
}

static int	indexcount(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	if (!s)
		return (NULL);
	if (!(split = (char **)malloc(sizeof(char *) * wordcount(s, c))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		i = indexcount(s, c, i);
		if (s[i])
		{
			split[j] = (char *)malloc(sizeof(char) * count(s, c, i));
			while (s[i] != c && s[i])
				split[j][k++] = s[i++];
			split[j++][k] = '\0';
		}
	}
	split[j] = 0;
	return (split);
}
