/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:22:01 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 03:47:48 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char *dp = s1;
	const char *sp = s2;
	while (n--)
		*dp++ = *sp++;
	return s1;
}
