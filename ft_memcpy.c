#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;
	size_t i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}