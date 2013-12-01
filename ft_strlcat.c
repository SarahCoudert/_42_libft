/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:14:33 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/01 18:47:10 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_process_c(int counter, char **dest_copy, const char **src_copy)
{
	while (**src_copy != '\0')
	{
		if (counter != 1)
		{
			**dest_copy = **src_copy;
			*dest_copy = *dest_copy + 1;
			counter--;
		}
		*src_copy= *src_copy + 1;
	}
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char *dest_copy;
	const char *src_copy;
	size_t counter;
	size_t dest_len;

	dest_copy = dst;
	src_copy = src;
	counter = size;
	while (*dest_copy != '\0' && counter != 0)
	{
		counter--;
		dest_copy++;
	}
	dest_len = dest_copy - dst;
	counter = size - dest_len;
	if (counter == 0)
		return (ft_strlen(src_copy) + dest_len);
	ft_process_c(counter, &dest_copy, &src_copy);
	*dest_copy = '\0';
	return ((src_copy - src) + dest_len);
}
