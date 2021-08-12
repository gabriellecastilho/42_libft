#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*s;

	s = (char *)str;
	while (n > 0)
		s[n--] = 0;
	return ;
}
