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

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (size + 1 < size)
		return (NULL);
	if (!(newstr = (char *)malloc(size + 1)))
		return (NULL);
	while (newstr[i])
	{
		newstr[i] = 0;
		i++;
	}
	return (newstr);
}

char **ft_strsplit(char const *s, char c)
{
	size_t a;
	size_t b;
	size_t len;
	char str[a][b];

	a, b, len = 0;
	while (
}

int	main(int argc, char **argv)
{
	char **str;

	if (argc != 3)
		return (printf("%s", "arguments error"));
	str = ft_strsplit(argv[2], argv[3]);
	return (0);
}
