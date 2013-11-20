/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:51:57 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 03:06:42 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_bzero(void *mem_org, void *mem_ft, int length, int *r)
{
	bzero(mem_org, length);

	/* 
	 * printf("> Testing - ft_memset(%p, %i, %i) => ", mem_ft, value, length);
	 */
	ft_bzero(mem_ft, length);
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
		printf("\n\t>>> <REFERENCE> memset(%p, %i) : ", mem_org, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memset(%p, %i) => ", mem_ft, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(void*, void*, int, int*), int *r)
{
	int i;
	char *chaine;
	char *chaine_mod;

	i = 0;
	while (i < 32767)
	{
		chaine = malloc(sizeof(char) * i);
		chaine_mod = malloc(sizeof(char) * i);
		ft_generate_strings(i, chaine, chaine_mod);
		(*ptrfonction)(chaine, chaine_mod, i, r);
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
	void (*ptrfonction)(void*, void*, int, int*);

	r = ft_init_tests("ft_bzero");	
	ptrfonction = &ft_test_bzero;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_bzero", r);

	return 0;
}
