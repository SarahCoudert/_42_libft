/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:32:39 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int	len;
	int	counter;

	counter = 0;
	len = ft_strlen (s);
	while ( counter < len )
	{
		ft_putchar(s[counter]);
		counter++;
	}
}
int main()
{
	ft_putstr("Je m'apelle André\n");
	return 0;
}
