/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:14:50 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 20:30:09 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_strlcat(char *mem_ft, char *mem_org, char *cpy_ft, int c, int *r)
{
	printf("before:  mem_org = '%s', cpy_ft = '%s', c = '%i'\n", mem_org, cpy_ft, c);
	int res_org = strlcat(mem_org, cpy_ft, c);
	int res_ft = ft_strlcat(mem_ft, cpy_ft, c);

	printf("strlcat(%s,%s, %i) => [%i]\n",mem_org, cpy_ft, c, res_org);
	printf("ft_strlcat(%s,%s, %i) => [%i]\n",mem_ft, cpy_ft, c, res_ft);
	if (res_org == res_ft)
	{
		ft_digest_results(r, 1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m");
		/*printf("\n[actual](%s) =! [expected](%s)\n", res_ft, res_org);
		printf("\n=================================================================\n");*/
		ft_digest_results(r, 0);
	}
}

void	ft_test_with_all_values(void (*ptrfonction)(char *, char *, char *, int, int*), int *r)
{
	char chaine[20] = "Bonjour ";
	char chaine_org[20] = "Bonjour ";
	char chaine_mod[30] = "AndreAubinCeciEstMonNomDeFamE";

	(*ptrfonction)(chaine, chaine_org, chaine_mod, 3, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 4, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 5, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 25, r);
	(*ptrfonction)(chaine, chaine_org, chaine_mod, 0, r);
}

int	main(int argc, char *argv[])
{
	int	*r;
	void (*ptrfonction)(char*, char *, char*, int, int*);

	r = ft_init_tests("ft_strlcat");	
	ptrfonction = &ft_test_strlcat;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_strlcat", r);

	return 0;
}
