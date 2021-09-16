#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
	dest = (char *)d;
	while (i < n)
	{
		dest[i] = src[i];
		i++
	}
	return (d);
}
