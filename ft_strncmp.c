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
#if defined(VERBOSE)
	ft_putstr(">> ft_strncmp\n");
	ft_putstr("\ts1 = [");
	ft_putstr(s1);
	ft_putstr("]\n\ts2 = [");
	ft_putstr(s2);
	ft_putstr("]\n\tsize = [");
	ft_putstr(n);
	ft_putstr("]\n")
#endif
	if ( s1 == NULL && s2 == NULL)
		return (0);
	else if (s1 == NULL || s2 == NULL)
		return (999);
	while (s1[counter] != '\0' && !stop)
	{
		diff += (s1[counter] - s2[counter]);
		if (counter == n-1 || s2[counter] != s1[counter])
			stop = 1;
		counter++;
	}

#if defined(VERBOSE)
	ft_putstr("<< ft_strncmp\n");
#endif
	return (diff);
}
