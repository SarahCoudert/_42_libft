/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:14:04 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:14:39 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				d;
	int				trim_start;
	unsigned int	c;
	char			*new_str;

	d = 0;
	c = 0;
	trim_start = 0;
	new_str = ft_strnew (ft_strlen (s));
	while (c < ft_strlen (s))
	{
		if (!trim_start && ft_isblank (s[c]))
			c++;
		else
		{
			trim_start = 1;
			new_str[d++] = s[c++];
		}
	}
	while (ft_isblank (new_str[--d]))
		new_str[d] = '\0';
	return (new_str);
}
