/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:30 by aaubin            #+#    #+#             */
/*   Updated: 2013/11/22 01:28:57 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *	ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*new_l;
	t_list	*start;
	t_list	*start_d;

	start = lst;
	if ( start != NULL && start->content != NULL )
	{
		new_l = ft_lstnew (start->content, start->content_size);
		new_l = (*f)(new_l);
		start_d = new_l;
		while ( (start = start->next) )
		{
			start_d->next = ft_lstnew (start->content, start->content_size);
			start_d = start_d->next;
			start_d = (*f)(start_d);
		}
		return (new_l);
	}
	return (NULL);
}
