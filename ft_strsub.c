/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:13:31 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:28:55 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	counter;
	char			*dest;
	if (s == NULL)
		return (NULL);
	dest = ft_strnew (len + 1);
	counter = 0;
	if (dest == NULL)
		return (NULL);
	while (counter < len + start)
	{
		if (counter >= start)
		{
			dest[counter - start] = s[counter];
		}
		counter++;
	}
	return (dest);
}
