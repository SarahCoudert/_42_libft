/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 05:26:46 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/20 05:32:31 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libTest/libft_test.h"
#include "libft.h"

#include <stdio.h>

void	ft_test_strdup(const char *mem_ft, int *r)
{
	char *res_org = strdup(mem_ft);
	char *res_ft = ft_strdup(mem_ft);

	if (strcmp(res_org, res_ft) == 0)
	{
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

void	ft_test_with_all_values(void (*ptrfonction)(const char *, int*), int *r)
{
	int i;
	char *chaine;

	i = 0;
	while (i < 100)
	{
		chaine = malloc(sizeof(char) * i);
		ft_generate_string(i, chaine);
		(*ptrfonction)(chaine, r);
		free(chaine);
		chaine = NULL;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*r;
	void (*ptrfonction)(const char*, int*);

	r = ft_init_tests("ft_strdup");	
	ptrfonction = &ft_test_strdup;

	ft_test_with_all_values(ptrfonction, r);

	printf("\n");
	ft_end_tests("ft_strdup", r);

	return 0;
}
