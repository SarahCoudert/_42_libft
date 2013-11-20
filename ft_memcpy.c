/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2013/11/20 03:56:23 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 03:56:54 by aaubin           ###   ########.fr       */
=======
/*   Created: 2013/11/20 03:22:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 04:39:08 by aaubin           ###   ########.fr       */
>>>>>>> tests
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
