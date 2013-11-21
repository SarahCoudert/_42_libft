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
	char			c;

	value = 0;
	positive = (*str == '-' ? -1 : 1);
	go_away = 0;
	digit = 0;
	if ( *str == '-' || *str == '+')
		str++;
	if ( ft_strlen(str) > 19 )
		return (positive == 1 ? -1 : 0);
	while (!go_away && (c = *str++) != '\0')
	{
		if (c >= '0' && c <= '9')
			digit = (int) (c - '0');
		else
			go_away = 1;
		value = (value * 10) + digit;
	}
	return (value * positive);
}
