/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastilh <gcastilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:53:37 by gcastilh          #+#    #+#             */
/*   Updated: 2021/09/19 12:53:37 by gcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	if (!d || !s)
		return (NULL);
	i = 0;
	src = (char *)s;
	dest = (char *)d;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (d);
}
