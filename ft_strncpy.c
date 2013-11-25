/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 06:31:27 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 06:49:12 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char			*fill;


#if defined(VERBOSE)
	ft_putstr("ft_strncpy");
#endif
	fill = s1;
	while (n > 0 && *s2 != '\0') {
		*fill++ = *s2++;
		--n;
	}
	while (n > 0) {
		*fill++ = '\0';
		--n;
	}
	return s1;
}
