#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;
	char temp[50];

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}
