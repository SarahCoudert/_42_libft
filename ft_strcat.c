/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 06:31:27 by aaubin            #+#    #+#             */
/*   Updated: 2014/04/23 23:25:34 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strcat(char *s1, const char *s2)
{
	size_t				len;
	unsigned int		offset;
	unsigned int		cmpt;
	char				*fill;

	offset = ft_strlen(s1);
	fill = s1;
	len = ft_strlen(s2);
	cmpt = 0;
	while (cmpt + offset <= len + offset)
	{
		fill[cmpt + offset] = s2[cmpt];
		cmpt++;
	}
	fill[cmpt + offset] = '\0';
	return (s1);
}
