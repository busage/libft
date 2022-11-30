/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:01:38 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/13 14:07:10 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area dst.
// If dst and src overlap, behavior is undefined.
// Applications in which dst and src might overlap should use memmove(3)
// instead.

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (!dst && !src)
		return (0);
	i = 0;
	new_dst = dst;
	new_src = (unsigned char *)src;
	while (i++ < n)
	{
		*new_dst++ = *new_src++;
	}
	return (dst);
}
