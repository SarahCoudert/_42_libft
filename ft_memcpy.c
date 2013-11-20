/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:22:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 05:22:36 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*ret;
	char	*reader;

	reader = (char *) s2;
		ret = s1;
		while ( n-- )
		{
			*(char *)s1 = *reader;
			reader = (char *)s2 + 1;
			s1 = (char *)s1 + 1;
		}
	return (ret);
}
