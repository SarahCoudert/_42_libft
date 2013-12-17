/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:01:38 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:01:56 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	size_t			len;
	unsigned int	cmpt;
	char			*fill;

	cmpt = 0;
	fill = s1;
	len = ft_strlen(s2);
	while (cmpt <= len)
	{
		fill[cmpt] = s2[cmpt];
		cmpt++;
	}
	return (s1);
}
