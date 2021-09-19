/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastilh <gcastilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:54:41 by gcastilh          #+#    #+#             */
/*   Updated: 2021/09/19 12:54:42 by gcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			ptr = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)c)
		ptr = (char *)&str[i];
	return (ptr);
}
