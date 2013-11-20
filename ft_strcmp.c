/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:44:57 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 22:21:17 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		diff;
	int		counter;
	int		stop;

	diff = 0;
	stop = 0;
	counter = 0;
	while (s1[counter] != '\0' && !stop)
	{
		diff += (s1[counter] - s2[counter]);
		if (s2[counter] != s1[counter])
			stop = 1;
		counter++;
	}
	return (diff);
}