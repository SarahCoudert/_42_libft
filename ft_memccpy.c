/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 03:52:22 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 04:30:45 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char *dp = s1;
	const char *sp = s2;
	while (n--)
	{
		printf("sp='%c' & c='%c'\n",*sp, c);
		if ( *sp == c )
		{
			*dp++ = *sp++;
			return (dp);
		}
		*dp++ = *sp++;
	}
	return (NULL);
}
