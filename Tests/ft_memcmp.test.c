/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:36:12 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:41:15 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>


void	ft_test_cmp(char *a, char *de, int n, int *r)
{
	int		b =		ft_memcmp(a, de, n);
	int		c =		memcmp(a, de, n);

	if ( b == c )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);
}

int	main(int argc, char *argv[])
{
	int		*r;

	r = ft_init_tests("ft_memcmp");	
	ft_test_cmp("bonjour","bonjour", 7,r);
	ft_test_cmp("bonjour","bonjour", 3, r);
	ft_test_cmp("bonjour","bonjour", 10, r);
	ft_test_cmp("bonjour","bon", 3, r);
	ft_test_cmp("bon","bonjour", 3, r);
	ft_test_cmp("","", 3, r);
	ft_test_cmp("ok","", 3, r);
	ft_test_cmp("","ok", 3, r);

	printf("\n");
	ft_end_tests("ft_memcmp", r);

	return 0;
}
