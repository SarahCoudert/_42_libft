/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:10:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 22:31:59 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		*r;

	r = ft_init_tests("ft_strcmp");	

	char	*a =	"Bonjour";
	int		b =		ft_strcmp(a, "Bonjour");
	int		c =		strcmp(a, "Bonjour");

	if ( b == c )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);

	printf("\n");
	ft_end_tests("ft_strcmp", r);

	return 0;
}
