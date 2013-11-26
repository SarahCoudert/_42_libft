/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:32:39 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*
Prototype
	char ** ft_strsplit(char const *s, char c);
Description
	Alloue (avec malloc(3)) et retourne un tableau de chaines de
	caractères “fraiches” (toutes terminées par un ’\0’, le tableau
	également donc) résultant de la découpe de s selon le caractère
	c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
	ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
	le tableau ["salut", "les", "etudiants"].
Param.
	#1 La chaine de caractères à découper.
	#2 Le caractère selon lequel découper la chaine.
Retour
	Le tableau de chaines de caractères “fraiches” résultant de la
	découpe.
Fonctions
	libc malloc(3)
*/
static int		ft_count_char(char const *s, char c)
{
	int	len;
	int	counter;
	int	count;

	count = 2;
	counter = 0;
	len = ft_strlen(s);

	while (counter < len)
	{
		if (s[counter] == c && s[counter + 1] != c)
		{
			count++;
		}
		counter++;
	}
	return (count);
}

char **	ft_strsplit(char const *s, char c)
{
	int		n;
	int		nb;
	int		sub_counter;
	int		counter;
	char	**final;

	nb = 0;
	counter = 0;
	sub_counter = 0;
	n = ft_count_char (s, c);
	final = (char **) malloc(n * sizeof(char**));
	n = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c && s[counter + 1] != c)
		{
			final[n] = ft_strsub (s, sub_counter, counter - sub_counter - nb);
			n++;
			sub_counter = counter;
			nb = 1;
		}
		else if (s[counter + 1] == c)
			nb ++;
		counter++;
	}
	final[n] = ft_strsub (s, sub_counter, counter - sub_counter);
	return (final);
}
