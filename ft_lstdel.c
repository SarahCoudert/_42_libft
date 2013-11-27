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

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*save;

	save = (*alst);
	while ( save != NULL )
	{
		if ( save != NULL )
		{
			(*del)((*alst)->content, (*alst)->content_size);
			save = (*alst)->next;
			(*alst) = NULL;
		}
	}
	ft_lstdelone (alst, (*del));
}
