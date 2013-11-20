/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 06:31:41 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 07:28:01 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_strcat(char *mem_ft, char *mem_org, char *cpy_ft, int *r)
{
	char *res_org = strcat(mem_org, cpy_ft);
	char *res_ft = ft_strcat(mem_ft, cpy_ft);

	/* printf("strcat(%s,%s,%s) => [%s][%s]\n",mem_ft, mem_org, cpy_ft, res_ft, res_org); */
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

void	ft_test_with_all_values(void (*ptrfonction)(char *, char *, char *, int*), int *r)
{
	int i;

	i = 4;
	while (i < 5)
	{
		/*chaine = malloc(sizeof(char) * i*2);
		chaine_org = malloc(sizeof(char) * i*2);
		chaine_mod = malloc(sizeof(char) * i/2);
		*/
		char chaine[200] = "Bonjour ";
		char chaine_org[200] = "Bonjour ";
		char chaine_mod[6] = "Andre";
		
		(*ptrfonction)(chaine, chaine_org, chaine_mod, r);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*r;
	void (*ptrfonction)(char*, char *, char*, int*);

	r = ft_init_tests("ft_strcat");	
	ptrfonction = &ft_test_strcat;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_strcat", r);

	return 0;
}
