/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:52:03 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/27 18:38:12 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlcpy() and strlcat() functions copy and concatenate strings with
// the same input parameters and output result as snprintf(3).  They are
// designed to be safer, more consistent, and less error prone replacements for
// the easily misused functions strncpy(3) and strncat(3).

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
