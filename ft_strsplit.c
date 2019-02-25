/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:00:52 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/25 22:45:19 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_words_count(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (w);
}

static	char	*ft_strndup(char const *src, size_t n)
{
	char	*str;

	if (!(str = (char *)malloc(n + 1)))
		return (NULL);
	str = ft_strncpy(str, src, n);
	str[n] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	first;
	size_t	last;

	i = 0;
	first = 0;
	last = 0;
	if (!(str = (char **)malloc(ft_words_count(s, c) * sizeof(char *) + 1)))
		return (NULL);
	while (s[last] != '\0')
	{
		while (s[last] == c)
			last++;
		first = last;
		while (s[last] && s[last] != c)
			last++;
		if (last > first)
		{
			str[i] = ft_strndup(s + first, last - first);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
