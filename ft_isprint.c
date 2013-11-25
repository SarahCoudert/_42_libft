/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 01:22:49 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 01:35:53 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	ft_putstr("ft_isprint\n");
	if (c >= 040 && c <= 0176)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
