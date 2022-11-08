
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:00 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:13:04 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<libc.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *constr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	constr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!constr)
		return constr;
	i = 0;
	while (i < len1)
	{
		constr[i] =s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (i < len2)
	{
		constr[j] =s2[i];
		i++;
		j++;
	}
	return constr;
}
