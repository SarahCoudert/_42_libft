/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:47:53 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/19 20:05:50 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_dump_mem(void *start, int length)
{
	int	counter;
	int	*save;

	counter = 0;
	save = start;

	while ( counter < length )
	{
		printf("[%i]",*save);
		save ++;
		counter++;
	}
	printf(" -> ");
	counter = 0;
	save = start;

	while ( counter < length )
	{
		printf("[%c]",*save);
		save ++;
		counter++;
	}
}

int		ft_assert_same_memory(const void *s1, const void *s2, size_t n)
{
	if( memcmp(s1, s2, n) == 0 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_digest_results(int *r, int re)
{
	if (re)
		r[0] ++;
	else
		r[1] ++;
}

int		ft_test_memset(void *mem_org, void *mem_ft, int value, int length, int *r)
{
	memset(mem_org, value, length);

	printf("> Testing - ft_memset(%p, %i, %i) => ", mem_ft, value, length);
	ft_memset(mem_ft, value, length);
	if (ft_assert_same_memory(mem_ft, mem_org, length))
	{
		printf("\t\t\033[1;32mOK.\033[0;39m \n");
		ft_digest_results(r, 1);
		return (1);
	}
	else
	{
		printf("\t\t\033[1;31mERROR\033[0;39m \n[actual](%s) =! [expected](%s)\n",mem_ft, mem_org);
		printf("\n\t>>> <REFERENCE> memset(%p, %i, %i) : ", mem_org, value, length);
		ft_dump_mem(mem_org, length);
		printf("\n\t>>> <EXPERIMENT> ft_memset(%p, %i, %i) => ", mem_ft, value, length);
		ft_dump_mem(mem_ft, length);
		printf("\n=================================================================\n");
		ft_digest_results(r, 0);
		return (0);
	}
}

int		*ft_init_tests(char *name)
{
	int	*results;

	results = malloc(sizeof(int) * 2);
	results[0] = 0;
	results[1] = 0;
	printf("\033[1;34m======== [LAUNCHING TESTS FOR %s] ======== \033[0;39m\n", name);

	return (results);
}
void	ft_end_tests(char *name, int *results)
{
	int	success;
	int	failures;

	success		=	results[0];
	failures	=	results[1];

	printf("RESULTS FOR \033[1;33m ft_memset \033[0;39m : \033[1;32m %i Success\033[1;39m, \033[1;31m %i failure(s)\033[1;39m. \n", success, failures);
}

int	main(int argc, char *argv[])
{
	int	*r;

	r = ft_init_tests("ft_memset");	

	/* Test un */
	int *a;
	a = malloc(10 * sizeof(int));
	int *b;
	b = malloc(10 * sizeof(int));
	ft_test_memset(a, b, 6, 10, r);

	/* test deux */
	char stra[] = "almost every programmer should know memset!";
	char strb[] = "almost every programmer should know memset!";
	ft_test_memset(stra, strb, 'a', 10, r);

	char stra1[] = "!";
	char strb1[] = "!";
	ft_test_memset(stra1, strb1, 'a', 1, r);

	char stra2[] = "!";
	char strb2[] = "!";
	ft_test_memset(stra2, strb2, 'a', 3, r);

	char stra3[] = "!";
	char strb3[] = "!";
	ft_test_memset(stra3, strb3, 'a', 0, r);

	char stra4[] = "";
	char strb4[] = "";
	ft_test_memset(stra4, strb4, 'a', 10, r);

	char stra5[] = "dada";
	char strb5[] = "dada";
	ft_test_memset(stra5, strb5, 888, 5, r);

	char stra6[] = "gkgk";
	char strb6[] = "gkgk";
	ft_test_memset(stra6, strb6, 'a', 10, r);

	char stra7[] = "gk";
	char strb7[] = "gk";
	ft_test_memset(stra7, strb7, '0', 1, r);




	printf("\n");
	ft_end_tests("ft_memset", r);

	return 0;
}
