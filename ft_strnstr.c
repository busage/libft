/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:04:35 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/27 14:28:50 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strnstr() function locates the first occurrence of the null-terminated
// string needle in the string haystack, where not more than len characters
// are searched.  Characters that appear after a ‘\0’ character are not
// searched.  Since the strnstr() function is a FreeBSD specific API, it should
// only be used when portability is not a concern.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;

	if (haystack == NULL && needle != NULL)
	{
		if (len == 0)
			return (NULL);
	}
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	printf("1 Not found :%s\n", ft_strnstr("abcd", "z", 10));
	printf("2 Basic test :%s\n", ft_strnstr("abcd", "c", 4));
	printf("3 End of string :%s\n", ft_strnstr("abcd", "d", 4));
	printf("4 Beginning :%s\n", ft_strnstr("abcd", "a", 4));
	printf("5 Finding NUL :%s\n", ft_strnstr("abcd", "\0", 4));
	printf("6 Finding last :%s\n", ft_strnstr("ababa", "b", 4));
	printf("7 Empty string :%s\n", ft_strnstr("", "b", 4));
	printf("8 NUL in empty string :%s\n", ft_strnstr("", "\0", 4));
	printf("9 search when string is NUL :%s\n", ft_strnstr("fake", NULL, 3));
	printf("10 search when string is NUL :%s\n", ft_strnstr(NULL, "fake", 0));
	printf("10 search when string is NUL  :%s\n", ft_strnstr(NULL, NULL, 0));
	printf("-----------------------------------\n");
	printf("1 Not found :%s\n", strnstr("abcd", "z", 10));
	printf("2 Basic test :%s\n", strnstr("abcd", "c", 4));
	printf("3 End of string :%s\n", strnstr("abcd", "d", 4));
	printf("4 Beginning :%s\n", strnstr("abcd", "a", 4));
	printf("5 Finding NUL :%s\n", strnstr("abcd", "\0", 4));
	printf("6 Finding last :%s\n", strnstr("ababa", "b", 4));
	printf("7 Empty string :%s\n", strnstr("", "b", 4));
	printf("8 NUL in empty string :%s\n", strnstr("", "\0", 4));
	printf("9 search when string is NUL :%s\n", strnstr("fake", NULL, 0));
	printf("10 search when string is NUL  :%s\n", strnstr(NULL, "fake", 0));
	printf("10 search when string is NUL  :%s\n", strnstr(NULL,NULL, 0));

	return (0);
}
 */
