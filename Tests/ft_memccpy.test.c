/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:01:12 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 04:31:27 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_memccpy(void *mem_org, void *mem_ft, void *value, char c, int length, int *r)
{
	char *e = memccpy(mem_org, value, c, length);
	char *d = ft_memccpy(mem_ft, value, c, length);

	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", (char *)mem_ft, (char *)mem_org);
		printf("\n\t>>> <REFERENCE> memccpy(%p, %p, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memccpy(%p, %p, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_memccpy");	
	char chaine[48] = "Bonjour tout le monde !";
	char chaine_mod[48] = "Bonjour tout le monde !";
	char chaine_test[48] = "Peninsule";
	ft_test_memccpy(chaine_mod, chaine, chaine_test, 's', 10, r);
	printf("\n");
	ft_end_tests("ft_memccpy", r);

	return 0;
}
