/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:03:23 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:03:52 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	len;
	int	counter;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen (s);
		counter = 0;
		while (counter < len)
		{
			(*f)(s);
			s++;
			counter++;
		}
	}
}
