/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:37:12 by tferrari          #+#    #+#             */
/*   Updated: 2016/11/02 19:37:22 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	int		k;
	char	*d;

	i = ft_strlen((char *)s);
	j = 0;
	k = 0;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && (s[j]))
		j++;
	if (i == j)
	{
		if (!(d = (char *)malloc((1) * sizeof(char))))
			return (NULL);
		d[0] = '\0';
		return (d);
	}
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
	&& (i >= 0))
		i--;
	if (!(d = (char *)malloc((i - j + 2) * sizeof(char))))
		return (NULL);
	while ((j + k) <= i)
	{
		d[k] = s[j + k];
		k++;
	}
	d[k] = '\0';
	return (d);
}
