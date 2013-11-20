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
	size_t			len;
	unsigned int	cmpt;
	char			*fill;

	cmpt = 0;
	fill = s1;
	len = ft_strlen(s2);

	while (cmpt <= len)
	{
		fill[cmpt] = (cmpt > n ? '\0' : s2[cmpt]);
		cmpt++;
	}
	return (s1);
}
