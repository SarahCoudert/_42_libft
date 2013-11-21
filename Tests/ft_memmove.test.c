/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:01:12 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 06:04:50 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_memmove(void *mem_org, void *mem_ft, void *value, int length, int *r)
{
	char *e = memmove(mem_org, value, length);
	char *d = ft_memmove(mem_ft, value, length);

	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", (char *)mem_ft, (char *)mem_org);
		printf("\n\t>>> <REFERENCE> memmove(%p, %p, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memmove(%p, %p, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_memmove");	
	char chaine[50] = "Bonjour !\0Muffin gargantuesque";
	char chaine_mod[50] = "Bonjour !\0Muffin gargantuesque";
	
	char *d = &chaine[10];
	char *e = &chaine_mod[10];
	printf("chaine = %s\td = %s\n", chaine, d);
	char *res = ft_memmove(d, chaine, 0);
	char *res_mod = memmove(e, chaine, 0);
	printf("Fin ! res = %s\tchaine = %s\td = %s\n", res, chaine, d);
	printf("MODELE ! res = %s\tchaine = %s\te = %s\n", res_mod, chaine_mod, e);
	//ft_test_memmove(chaine_mod, chaine, chaine_test, 10, r);
	printf("\n");
	ft_end_tests("ft_memmove", r);

	return 0;
}
