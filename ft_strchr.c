#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (str[i])
			i++;
		return ((char *)&str[i]);
	}
	while (str[i])
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}