
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:20:31 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:21:16 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < (n - 1))
		i++;
	if (s1[i] != s2[i] && n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
