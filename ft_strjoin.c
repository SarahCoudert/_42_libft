/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:32:39 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description
	Alloue (avec malloc(3)) et retourne une chaine de caractères
	“fraiche” terminée par un ’\0’ résultant de la concaténation
	de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
Param.
	#1 La chaine de caractères préﬁxe.
	#2 La chaine de caractères suﬃxe.
Retour
	La chaine de caractère “fraiche” résultant de la concaténation
	des deux chaines.
Fonctions
	libc malloc(3)
*/
char *	ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		n;
	int		counter;
	char	*final;

	ft_putstr("ft_strjoin\n");
	counter = 0;
	len = ft_strlen (s1);
	n = len + ft_strlen(s2) + 1;
	final = ft_strnew (n);
	if (final == NULL)
		return (NULL);
	while (counter < n)
	{
		if (counter < len)
			final[counter] = s1[counter];
		else
			final[counter] = s2[counter - len];
		counter++;
	}
	return (final);
}
