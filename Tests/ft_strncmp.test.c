/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:22:47 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 22:35:07 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		*r;

	r = ft_init_tests("ft_strncmp");	

	char	*a =	"Bonjour";
	int		b =		ft_strncmp(a, "Bonduelle", 4);
	int		c =		strncmp(a, "Bonduelle", 4);

	if ( b == c )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);

	printf("\n");
	ft_end_tests("ft_strncmp", r);

	return 0;
}
