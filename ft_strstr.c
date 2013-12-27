/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:13:07 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:13:27 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*s1_;
	char	*s2_;
	int		l;

	s1_ = (char *)s1;
	s2_ = (char *)s2;
	l = ft_strlen(s2_);
	while (*s1_ != '\0')
	{
		if (ft_strncmp(s1_, s2_, l) == 0)
		{
			return (s1_);
		}
		s1_++;
	}
	return (NULL);
}
