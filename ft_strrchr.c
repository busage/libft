/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialawlaqi <alialawlaqi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:15:33 by alialawlaqi       #+#    #+#             */
/*   Updated: 2022/11/30 12:10:40 by alialawlaqi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strrchr() function is identical to strchr(), except it locates the
last occurrence of c.
This function returns a pointer to the last occurrence of character in str.
If the value is not found, the function returns a null pointer.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		ptr = (char *)s;
	return (ptr);
}
/*
int main(void)
{
char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";
	if (ft_strrchr(s, 't' + 256) == (strrchr(s, 't' + 256)))
		printf("ft_strrchr = strrchr :  %s\n", strrchr(s, 't' + 256));
	return 0;
}
 */
