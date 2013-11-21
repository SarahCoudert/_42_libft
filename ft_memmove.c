/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:54:48 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 05:50:20 by aaubin           ###   ########.fr       */
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
	if ( (long int)s2 - ((long int)s1 + ft_strlen(s1)) <= 0 )
	{
		printf("Ok memoire -> memcpy\n");
		return (ft_memcpy(s1, s2, n));
	}
	printf("Rev memoire\n");
	n = ( n > ft_strlen(s2) ? ft_strlen(s2) : n );
	printf("n=%i\n", (int)n);
	while (n--)
		dp[n] = sp[n];
	return (s1);
}
