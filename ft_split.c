#include <stdlib.h>

static size_t	nbr_lines(char *s, char c)
{
	size_t	lines;
	size_t	i;

	lines = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			lines++;
		}
	}
	return (lines);
}

char	**ft_split(char *s, char c)
{
	char	**array;
	size_t	i = 0;
	size_t	j = 0;
	size_t	k;
	size_t	line_len = 0;

	array = (char **)malloc(sizeof(char*) * (nbr_lines(s,c) + 1));
	if (!array)
		return (malloc(0));
	while (s[i] && j < nbr_lines(s,c))
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			line_len++;
			i++;
		}
		array[j] = (char *)malloc(sizeof(char) * (line_len + 1));
		if (!array[j])
			return (0);
		k = 0;
		while (line_len)
			array[j][k++] = s[i - line_len--];
		array[j++][k] = '\0';
	}
	return (array);
}
