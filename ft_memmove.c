/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:54:46 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 08:54:58 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dp;
	const char	*sp;

	sp = s2;
	dp = s1;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	sp += n;
	dp += n;
	while (n--)
		*--dp = *--sp;
	return (s1);
}
