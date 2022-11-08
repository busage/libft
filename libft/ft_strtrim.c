
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:14:08 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:14:11 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<libc.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s_strat;
	size_t	s_end;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		s_strat = 0;
		s_end = ft_strlen(s1);
		while (s1[s_strat] && ft_strchr(set, s1[s_strat]))
			s_strat++;
		while (s1[s_end - 1] && ft_strchr(set, s1[s_end - 1]) && s_end > s_strat)
			s_end--;
		str = (char*)malloc(sizeof(char) * (s_end - s_strat + 1));
		if (str)
			ft_strlcpy(str, &s1[s_strat], s_end - s_strat + 1);
	}
	return (str);
}
