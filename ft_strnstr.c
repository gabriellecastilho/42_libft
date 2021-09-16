#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		while (i + j < len && little[j] == big[i + j])
		{
			j++;
			if (little[j] == 0)
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
