/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:22:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 03:54:29 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n);
{
	char	*sve;
	char	*t;

	sve = s1;
	if ( n )
	{
		t = s2;
		while ( n )
		{
			*s1 ++ = t ++;
			n --;
		}
	}
	return (sve);
}
