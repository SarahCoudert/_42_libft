/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 03:12:17 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 08:35:25 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	ft_putstr("ft_memdel\n");
	free(*ap);
	*ap = NULL;
}
