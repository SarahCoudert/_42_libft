/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:54:48 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:02:59 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dp;
	const char	*sp;

	sp = s2;
	dp = s1;
	if ( s1 <= s2 )
	{
		printf("Ok memoire -> memcpy\n");
		return (ft_memcpy(s1, s2, n));
	}
	printf("Rev memoire\n");
	/* copy backwards, from end to beginning */
	sp += n;
	dp += n;

	/* Simple, byte oriented memmove. */
	while (n--)
		*--dp = *--sp;

	return (s1);

}
