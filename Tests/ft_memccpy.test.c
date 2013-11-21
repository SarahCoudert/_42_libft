/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:58:08 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/21 03:55:41 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_memcpy(void *mem_org, void *mem_ft, void *value, int length, int *r)
{
	memcpy(mem_org, value, length);
	ft_memcpy(mem_ft, value, length);

	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", (char *)mem_ft, (char *)mem_org);
		printf("\n\t>>> <REFERENCE> memcpy(%p, %p, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memcpy(%p, %p, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(void*, void*, void*, int, int*), int *r)
{
	int i;
	int size;
	char *chaine;
	char *chaine_mod;
	char *chaine_test;

	i = 0;
	while (i < 32767)
	{
		size = rand() % 32767;

		chaine = malloc(sizeof(char) * i);
		chaine_mod = malloc(sizeof(char) * i);
		chaine_test = malloc(sizeof(char) * size);
		ft_generate_strings(i, chaine, chaine_mod);
		ft_generate_string(size, chaine_test);
		(*ptrfonction)(chaine, chaine_mod, chaine_test, i, r);
		free(chaine);
		free(chaine_mod);
		free(chaine_test);
		chaine = NULL;
		chaine_mod = NULL;
		chaine_test = NULL;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_memcpy");	
	char chaine[48] = "Bonjour tout le monde !";
	char chaine_mod[48] = "Bonjour tout le monde !";
	char chaine_test[48] = "Kikooo";
	ft_test_memcpy(chaine_mod, chaine, chaine_test, 4, r);
	printf("\n");
	ft_end_tests("ft_memcpy", r);

	return 0;
}
