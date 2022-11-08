
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:10:56 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:11:02 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<libc.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    unsigned int    j;
    char            *str;
	size_t 			slen;

    i = 0;
    j = 0;
	slen = ft_strlen(s);
    if (!s)
        return (NULL);
    if (start >= slen)
    {
        if (!(str = (char *)malloc(1)))
            return (NULL);
        str[0] = '\0';
        return (str);
    }
    while (s[i] != s[start])
        i++;
	if (len > slen)
		len =slen;
    if (!(str = (char *)malloc((len * sizeof(char)) + 1)))
        return (NULL);
    while (j < len && s[i])
        str[j++] = s[i++];
    str[j] = '\0';
    return (str);
}
