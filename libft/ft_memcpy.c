     #include "libft.h"

	 void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
	 {
		size_t  i;
		unsigned char	*new_dst;
		unsigned char	*new_src;
		if (!dst && !src)
			return (0);
		i = 0;
		new_dst = dst;
		new_src = (unsigned char *)src;
		while (i++ < n )
		{
			*new_dst++ = *new_src++;
		}
		return (dst);
	 }
