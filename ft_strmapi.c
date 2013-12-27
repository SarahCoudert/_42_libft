/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:07:21 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:08:01 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	counter;
	char			*new_str;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen (s);
	new_str = ft_strnew (len);
	counter = 0;
	while (counter < len)
	{
		new_str[counter] = (*f)(counter, s[counter]);
		counter++;
	}
	return (new_str);
}
