/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 09:00:14 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 09:00:37 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_find;
	char	*found;
	int		count;

	to_find = c;
	found = NULL;
	count = 0;
	while (s[count] != '\0' && found == NULL)
	{
		if (s[count] == to_find)
			found = (char *)(s + count);
		count++;
	}
	if (s[count] == to_find && found == NULL)
		found = (char *)(s + count);
	return (found);
}
