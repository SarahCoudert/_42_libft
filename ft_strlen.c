/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 05:04:12 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 05:17:42 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		len;

#if defined(VERBOSE)
	ft_putstr("ft_strlen");
#endif
	len = 0;
	while ('\0' != s[len])
	{
		len ++;
	}
	return (len);
}
