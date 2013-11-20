/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubs1 <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:57:54 by aaubs1            #+#    #+#             */
/*   Updated: 2013/11/20 23:44:01 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char c;
	char sc;
	size_t len;

	c = *s2++;
	if (!c)
		return (char *) s1;

	len = ft_strlen(s2);

	while (ft_strncmp(s1, s2, len) != 0)
	{
		sc = *s1++;
		if (!sc)
			return (NULL);
		while (sc != c)
		{
			sc = *s1++;
			if (!sc || sc == '\0')
				return (NULL);
		}
	}
	return ((char *) (s1 - 1));
}
