/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:46:12 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:56:35 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	digit;
	unsigned int	go_away;
	int				positive;
	int				value;

#if defined(VERBOSE)
	ft_putstr("ft_atoi\n");
#endif
	value = 0;
	go_away = 0;
	digit = 0;
	while ( *str == ' ' || *str == '\t' )
		str++;
	positive = (*str == '-' ? -1 : 1);
	if ( *str == '-' || *str == '+')
		str++;
	if ( ft_strlen(str) > 19 )
		return (positive == 1 ? -1 : 0);
	while (ft_isdigit (*str) && *str != '\0')
	{
		digit = (int) (*str - '0');
		value = (value * 10) + digit;
		str++;
	}
	return (value * positive);
}
