/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:00:52 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 17:01:03 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int	ft_words_count(char *s, char c)
{
	size_t i;
	size_t w;

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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = ((char *)malloc(sizeof(char) * (len + 1)));
	if (dest == NULL)
		return (0);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char **ft_strsplit(char const *s, char c)
{
	char **str; //str[w][l];

	size_t w;
	size_t l;
	size_t i;
	size_t len;

	len = ft_strlen(s);
	if (!(str = (char **)malloc(w * sizeof(char *) + len)))
		return (NULL);
	return (str);
}

int	main(int argc, char **argv)
{
	char **str;

	if (argc != 3)
		return (printf("%s", "arguments error"));
	str = ft_strsplit(argv[2], argv[3][0]);
	return (0);
}
