/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:37:12 by tferrari          #+#    #+#             */
/*   Updated: 2016/11/02 19:37:22 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_fill(char **d, char *s, char c, int nbword)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = 0;
	if (nbword == 0)
	{
		d[i][k] = '\0';
		d[i + 1] = 0;
		return (d);
	}
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			d[j][k] = s[i];
			i++;
			k++;
		}
		if (j < nbword)
		{
			d[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	return (d);
}
