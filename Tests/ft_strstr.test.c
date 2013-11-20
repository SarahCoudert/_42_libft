/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:58:05 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 23:07:43 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_strstr");	

	char *a = "Bonjour tout le monde !";
	char *b = ft_strstr(a, "");
	char *c = strstr(a, "");
	printf("expected: [%s]\tresult:[%s]\n",c,b);
	if ( b && c )
	{
		if ( strcmp(b, c) == 0 )
			ft_digest_results(r, 1);
		else
			ft_digest_results(r, 0);
	}
	else
	{
		if ( b == c )
			ft_digest_results(r, 1);
		else
			ft_digest_results(r, 0);
	}
	printf("\n");
	ft_end_tests("ft_strstr", r);

	return 0;
}
