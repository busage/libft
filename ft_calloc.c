/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:06:43 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/24 11:27:48 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The calloc() function contiguously allocates enough space for count objects
// that are size bytes of memory each and returns a pointer to the allocated
// memory.  The allocated memory is filled with bytes of value zero.

#include "libft.h"
#include<libc.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
