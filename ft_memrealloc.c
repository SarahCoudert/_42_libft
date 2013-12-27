/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 08:55:02 by aaubin            #+#    #+#             */
/*   Updated: 2013/12/12 08:55:29 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *buf, size_t old_size, size_t new_size)
{
	char	*new_buf;
	char	*_buf;

	_buf = (char*) buf;
	new_buf = (char*) ft_memalloc(new_size);
	if (new_buf)
	{
		new_buf = ft_memcpy((void *) new_buf, (void *) buf, old_size);
		free(buf);
	}
	return ((void *) new_buf);
}
