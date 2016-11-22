/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:37:12 by tferrari          #+#    #+#             */
/*   Updated: 2016/11/02 19:37:22 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**d;
	int		nbword;
	int		*nbletter;
	int		i;

	nbword = ft_nbword((char *)s, c);
	i = 0;
	if (!(nbletter = (int *)malloc((nbword + 1) * sizeof(int))))
		return (NULL);
	nbletter = ft_nbletter((char *)s, c, nbletter, nbword);
	if (!(d = (char **)malloc((nbword + 1) * sizeof(char *))))
		return (NULL);
	if (nbword == 0)
		if (!(d[i] = (char *)malloc((nbletter[i] + 1) * sizeof(char))))
			return (NULL);
	while (i < nbword)
	{
		if (!(d[i] = (char *)malloc((nbletter[i] + 1) * sizeof(char))))
			return (NULL);
		i++;
	}
	d = ft_fill(d, (char *)s, c, nbword);
	d[i] = NULL;
	free(nbletter);
	return (d);
}
