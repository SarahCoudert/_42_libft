/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:36:28 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 09:03:45 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_strncat(char *mem_ft, char *mem_org, char *cpy_ft, int c, int *r)
{
	char *res_org = strncat(mem_org, cpy_ft, c);
	char *res_ft = ft_strncat(mem_ft, cpy_ft, c);

	/* printf("strncat(%s,%s,%s, %i) => [%s][%s]\n",mem_ft, mem_org, cpy_ft, c, res_ft, res_org); */
	if (strcmp(res_org, res_ft) == 0)
	{
		/* printf("\t\t\033[1;32mOK.\033[0;39m \n"); */
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		printf("\n[actual](%s) =! [expected](%s)\n", res_ft, res_org);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(char *, char *, char *, int, int*), int *r)
{
	char chaine[200] = "Bonjour ";
	char chaine_org[200] = "Bonjour ";
	char chaine_mod[20] = "Andre";

	(*ptrfonction)(chaine, chaine_org, chaine_mod, 3, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 4, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 5, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 0, r);
}

int	main(int argc, char *argv[])
{
	int	*r;
	void (*ptrfonction)(char*, char *, char*, int, int*);

	r = ft_init_tests("ft_strncat");	
	ptrfonction = &ft_test_strncat;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_strncat", r);

	return 0;
}
