/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:14:20 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/08 01:31:03 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*ns;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	if (s)
	{
		while (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == '\n')
			i++;
		if (s[i] == '\0')
			return (ft_strcpy(ft_memalloc(2), ""));
		len = ft_strlen(s) - 1;
		while (s[len] == ' ' || s[len] == ',' || s[len] == '\t' || s[len] == '\n')
			len--;
		if (!(ns = (char *)malloc(len - i + 2)))
			return (NULL);
		while (j < len - i + 1)
		{
			ns[j] = s[i + j];
			j++;
		}
		ns[j] = '\0';
		return (ns);
	}
	return (0);
}
