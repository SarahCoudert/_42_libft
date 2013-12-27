/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:00:45 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:00:58 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char	*s)
{
	int	length;
	int	counter;

	counter = 0;
	length = ft_strlen (s);
	while (counter < length)
	{
		*s = '\0';
		s++;
		counter++;
	}
}
