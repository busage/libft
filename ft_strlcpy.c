
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:50:40 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 07:50:43 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() and strlcat() functions copy and concatenate strings with
the same input parameters and output result as snprintf(3).  They are
designed to be safer, more consistent, and less error prone replacements
for the easily misused functions strncpy(3) and strncat(3).
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	stlen;

	stlen = ft_strlen(src);
	if ((stlen + 1) < dstsize)
	{
		ft_memcpy(dst, src, stlen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (stlen);
}
