/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:46:37 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 00:29:27 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_atoi");	

	char	*a = "++3";
	int		b = ft_atoi(a);
	int		c = atoi(a);
	printf("expected: [%i]\tresult:[%i]\n",c,b);
	if ( b == c )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);
	printf("\n");
	ft_end_tests("ft_atoi", r);

	return 0;
}
