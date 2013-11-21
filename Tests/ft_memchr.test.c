/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:11:13 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:29:08 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_memchr(void *mem_org, void *mem_ft, char value, int length, int *r)
{
	char *e = memchr(mem_org, value, length);
	char *d = ft_memchr(mem_ft, value, length);

	printf("e = %s\td = %s\n", e, d);
	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", (char *)mem_ft, (char *)mem_org);
		printf("\n\t>>> <REFERENCE> memchr(%p, %p, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memchr(%p, %p, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_memchr");	
	char chaine[48] = "Bonjour tout le monde !";
	char chaine_mod[48] = "Bonjour tout le monde !";
	char chaine_test = 't';
	ft_test_memchr(chaine_mod, chaine, chaine_test, 30, r);
	printf("\n");
	ft_end_tests("ft_memchr", r);

	return 0;
}
