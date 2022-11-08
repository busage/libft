
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:16:19 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:16:23 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libc.h>
#include"libft.h"

unsigned int num_of_words(const char *s,char spliter)
{
	int count = 0, i = 0,j = 0;
	while (s[i] != '\0')
    {
        if (s[i] == spliter  && s[i+1] != spliter)
        {
			j = 0;
			count++;
		}
		j++;
		i++;
    }
	if (j !=0 && s[i-1] != spliter)
		count =count + 1;

	return count;
}
static char	*gitword(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t slen;
	int		index;
	char	**split;

	if (!s || !(split = malloc((num_of_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	slen = ft_strlen(s);
	while (i <= slen)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == slen) && index >= 0)
		{
			split[j++] = gitword(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;	return (split);
}
