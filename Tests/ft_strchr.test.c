/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:43:08 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 20:54:47 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_strchr");	

	char *a = "Bonjour tout le monde !";
	char *b = ft_strchr(a, '\0');
	char *c = strchr(a, '\0');
	if ( strcmp(b, c) == 0 )
		ft_digest_results(r, 1);
	else
		ft_digest_results(r, 0);

	printf("\n");
	ft_end_tests("ft_strchr", r);

	return 0;
}
