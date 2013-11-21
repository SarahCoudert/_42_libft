/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:14:33 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:56:31 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src_len <= size && i < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return dst_len;
}
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{

	unsigned int    i;
	int             d;
	int             re;

	i = -1;
	while (src[++i]);
	re = i;
	i = -1;
	while (dst[++i]);
	re += (i < size) ? i : size;
	d = i;
	size -= i;
	while (src[d - i] && size > 0)
	{
		dst[d] = src[d - i];
		size--;
		d = d + 1;
	}
	dst[d] = '\0';
	return (re);
}
/*
int	main()
{
	char chaine[20] = "Bonjour ";
	char chaine_org[20] = "Bonjour ";
	char chaine_mod[30] = "AndreAubinCeciEstMonNomDeFamE";
	int c = 3;

	printf("before:  chaine_org = '%s', chaine_mod = '%s', c = '%i'\n", chaine_org, chaine_mod, c);
	int res_org = strlcat(chaine_org, chaine_mod, c);
	int res_ft = ft_strlcat(chaine, chaine_mod, c);

	printf("strlcat(%s,%s, %i) => [%i]\n",chaine_org, chaine_mod, c, res_org);
	printf("ft_strlcat(%s,%s, %i) => [%i]\n",chaine, chaine_mod, c, res_ft);

	printf("end !\n");
	return 0;
}
*/
