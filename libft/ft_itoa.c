
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:17:05 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/08 08:17:11 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libc.h>
#include"libft.h"
char *ft_itoa(int n)
{
	char *str;
	int i;
	int len;
	int j;
	int temp;
	char nmod;

	i = 0;
	len = 0;
	if (n == -2147483648)
		{
			str = ft_strdup("-2147483648");
			return str;
		}
    str =(char *)malloc(sizeof(char) * 12);
	if (str == NULL)
	{
		return str;
	}
	else if (n < 0)
	{
		n*= -1;
		str[0] = '-';
		len++;
		j = 1;
	}
	else
		j = 0;
	temp = n;
	while (temp/10 > 0)
		{
			temp =temp/10;
			len++;
		}
	while (j <= len)
	{
		nmod = (n % 10) + '0';
		str[j] = nmod;
		n = n/10;
		j++;
	}
	str[j] = '\0';

	while (i < len)
	{
		if (str[i] == '-')
			i++;
		nmod =str[len];
		str[len] = str[i];
		str[i] =nmod;
      i++;
	  len--;
	}
	return (str);
}

