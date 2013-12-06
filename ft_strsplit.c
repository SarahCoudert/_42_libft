/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/06 04:13:21 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **	ft_strsplit(char const *s, char c)
{
	int		n;
	int		sub_counter;
	int		counter;
	char	**final;
	char	*clone;

	counter = 0;
	sub_counter = 0;
	n = ft_count_char (s, c) + 2;
	clone = ft_strchartrim( ft_group_char (s, c), c);
	final = (char **) malloc(n * sizeof(char**));
	n = 0;
	while (clone[counter] != '\0')
	{
		if (clone[counter] == c)
		{
			final[n] = ft_strsub (clone, sub_counter, counter - sub_counter);
			n++;
			sub_counter = counter + 1;
		}
		counter++;
	}
	final[n] = ft_strsub (clone, sub_counter, counter - sub_counter);
	return (final);
}
