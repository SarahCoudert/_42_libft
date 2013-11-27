/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/22 01:28:57 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*save;

	save = (*alst);
	while ( save != NULL )
	{
		ft_putstr("deleting...");
		if ( save != NULL )
		{
			printf("(*alst) = %s\tnext = %p\tsize = %i\n", (char *)(*alst)->content, (*alst)->next, (int)(*alst)->content_size);
			ft_putchar ('1');
			(*del)((*alst)->content, (*alst)->content_size);
			ft_putchar ('2');
			save = (*alst)->next;
			(*alst) = NULL;
			ft_putchar ('3');
			ft_putchar ('4');
		}
			ft_putchar ('5');
	}
	ft_lstdelone (alst, (*del));
			ft_putchar ('6');
}
