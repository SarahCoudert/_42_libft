/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:23:28 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:07:15 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		counter;
	char	*new_str;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen (s);
	new_str = ft_strnew (len);
	counter = 0;
	while (counter < len)
	{
		new_str[counter] = (*f)(s[counter]);
		counter++;
	}
	return (new_str);
}
