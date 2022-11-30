/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:02:42 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/29 09:43:14 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ft_lstclear() return valueNoneExternal functs.freeDescriptionDeletes and frees
 the given node and every successor of that node, using the function ’del’ and
 free(3).Finally, the pointer to the list must be set to NULL.
 lst: The address of a pointer to a node.
 del: The address of the function used to delete the content of the node.
 */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
