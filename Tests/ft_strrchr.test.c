/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:53:48 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 20:55:58 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_strrchr");	

	char *a = "Bonjour tout le monde !";
	char *b = ft_strrchr(a, 'o');
	char *c = strrchr(a, 'o');
	
	if ( strcmp(b, c) == 0 )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);

	printf("\n");
	ft_end_tests("ft_strrchr", r);

	return 0;
}
