/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastilh <gcastilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:53:59 by gcastilh          #+#    #+#             */
/*   Updated: 2021/09/19 12:53:59 by gcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbr_lines(const char *s, char c)
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

size_t	ft_get_start(const char *s, char c, size_t end)
{
	size_t	start;

	start = end;
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

size_t	ft_get_end(const char *s, char c, size_t start)
{
	size_t	end;

	end = start;
	while (s[end] && s[end] != c)
		end++;
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_nbr_lines(s, c) + 1));
	if (!array)
		return (malloc(0));
	while (i < ft_nbr_lines(s, c))
	{
		start = ft_get_start(s, c, end);
		end = ft_get_end(s, c, start);
		array[i] = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!array[i])
			return (0);
		ft_strlcpy(array[i], (const char *)&s[start], end - start + 1);
		start = end;
		i++;
	}
	return (array);
}
