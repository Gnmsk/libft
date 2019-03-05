/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:06:25 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 17:07:32 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		nslen;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nslen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(ns = (char *)malloc(nslen)))
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ns[i] = s2[j];
		j++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
