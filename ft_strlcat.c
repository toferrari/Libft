/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:37:12 by tferrari          #+#    #+#             */
/*   Updated: 2016/11/02 19:37:22 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			idest;
	size_t			isrc;
	size_t			resultat;
	size_t			i;

	i = 0;
	idest = ft_strlen(dest);
	isrc = ft_strlen((char *)src);
	if (idest >= size - 1)
		return (resultat = isrc + size);
	while (((i + idest) < size - 1))
	{
		dest[idest + i] = (char)src[i];
		i++;
	}
	dest[idest + i] = '\0';
	resultat = isrc + idest;
	return (resultat);
}
