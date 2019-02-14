/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:14:20 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 17:28:22 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ns;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (NULL);
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
