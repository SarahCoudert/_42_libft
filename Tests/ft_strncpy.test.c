/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 06:31:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 06:57:28 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_strncpy(char *mem_ft, char *cpy_ft, int count, int *r)
{
	char *res_org = strncpy(mem_ft, cpy_ft, count);
	char *res_ft = ft_strncpy(mem_ft, cpy_ft, count);

	if (strcmp(res_org, res_ft) == 0)
	{
		/* printf("strncpy(%s,%s,%i) => [%s][%s]\n",mem_ft, cpy_ft, count, res_ft, res_org); */
		/* printf("\t\t\033[1;32mOK.\033[0;39m \n"); */
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%i) =! [expected](%i)\n", res_ft, res_org);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(char *, char *, int, int*), int *r)
{
	int i;
	char *chaine;
	char *chaine_mod;

	i = 0;
	while (i < 100)
	{
		chaine = malloc(sizeof(char) * i);
		chaine_mod = malloc(sizeof(char) * i/2);
		ft_generate_string(i, chaine);
		ft_generate_string(i/2, chaine_mod);
		(*ptrfonction)(chaine, chaine_mod, i/10, r);
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
	void (*ptrfonction)(char*, char *, int, int*);

	r = ft_init_tests("ft_strncpy");	
	ptrfonction = &ft_test_strncpy;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_strncpy", r);

	return 0;
}
