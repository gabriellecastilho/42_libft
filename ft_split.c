#include <stdlib.h>

static size_t	array_lines(char *s, char c)
{
	size_t lines;
	size_t i;

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

char 	**ft_split(char *s, char c)
{
	char	**array;
	size_t	i = 0;
	size_t	j = 0;
	size_t	k;
	size_t	section_len = 0;

	array = (char **)malloc(sizeof(char*) * (array_lines(s,c) + 1));
	if (!array)
		return (malloc(0));
	while (s[i] && j < array_lines(s,c))
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			section_len++;
			i++;
		}
		array[j] = (char *)malloc(sizeof(char) * (section_len + 1));
		if (!array[j])
			return (0);
		k = 0;
		while (section_len)
			array[j][k++] = s[i - section_len--];
		array[j++][k] = '\0';
	}
	return (array);
}