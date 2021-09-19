/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastilh <gcastilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:54:35 by gcastilh          #+#    #+#             */
/*   Updated: 2021/09/19 12:54:35 by gcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
