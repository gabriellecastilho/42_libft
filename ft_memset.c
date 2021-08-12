#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)str;

	while (i < n)
		s[i++] = (unsigned char)c;
	return (str);
}
