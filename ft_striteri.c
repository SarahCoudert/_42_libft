/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:04:06 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:04:54 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	len;
	int	counter;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen (s);
		counter = 0;
		while (counter < len)
		{
			(*f)(counter, s);
			s++;
			counter++;
		}
	}
}
