#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;
	char	temp[50];

	i = 0;
	src = (char *)s;
	dest = (char *)d;
	while (i < n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (d);
}
