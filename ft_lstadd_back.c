/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:01:15 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/26 10:55:34 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	Adds the node ’new’ at the end of the list.
	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		if (new->next != NULL)
			new->next = NULL;
		*lst = new;
		return ;
	}
	back = ft_lstlast(*lst);
	back->next = new;
}
