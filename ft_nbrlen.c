/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:56:02 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 08:56:25 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_nbrlen(int nombre)
{
	int	counter;

	counter = 0;
	if (nombre == 0)
		return (1);
	while (nombre > 0)
	{
		nombre = nombre / 10;
		counter++;
	}
	return (counter);
}
