#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (malloc(0));
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}