/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:50:44 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/29 08:15:29 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  The memmove() function copies len bytes from string src to string dst.
//  The two strings may overlap; the copy is always done in a non-destructive
//  manner.

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
