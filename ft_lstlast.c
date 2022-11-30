/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:05:10 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/29 10:06:17 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lts :The beginning of the list.
Return value :Last node of the list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
