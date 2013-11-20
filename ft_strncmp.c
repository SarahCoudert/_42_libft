/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:22:57 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 22:33:16 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				diff;
	unsigned int	counter;
	int				stop;

	diff = 0;
	stop = 0;
	counter = 0;
	while (s1[counter] != '\0' && !stop)
	{
		diff += (s1[counter] - s2[counter]);
		if (counter == n-1 || s2[counter] != s1[counter])
			stop = 1;
		counter++;
	}
	return (diff);
}
