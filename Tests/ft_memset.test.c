/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:47:53 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 02:38:35 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_memset(void *mem_org, void *mem_ft, int value, int length, int *r)
{
	memset(mem_org, value, length);

	/* 
	 * printf("> Testing - ft_memset(%p, %i, %i) => ", mem_ft, value, length);
	 */
	ft_memset(mem_ft, value, length);
	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		/*
		 * printf("\t\t\033[1;32mOK.\033[0;39m \n");
		 */
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", (char *)mem_ft, (char *)mem_org);
		printf("\n\t>>> <REFERENCE> memset(%p, %i, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memset(%p, %i, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(void*, void*, int, int, int*), int *r)
{
	int i;
	int size;
	char *chaine;
	char *chaine_mod;

	i = 0;
	while (i < 32767)
	{
		size = i;
		chaine = malloc(sizeof(char) * size);
		chaine_mod = malloc(sizeof(char) * size);
		ft_generate_strings(size, chaine, chaine_mod);
		(*ptrfonction)(chaine, chaine_mod, i, size, r);
		free(chaine);
		free(chaine_mod);
		chaine = NULL;
		chaine_mod = NULL;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*r;
	void (*ptrfonction)(void*, void*, int, int, int*);

	r = ft_init_tests("ft_memset");	
	ptrfonction = &ft_test_memset;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_memset", r);

	return 0;
}
