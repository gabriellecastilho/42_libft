/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastilh <gcastilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:52:38 by gcastilh          #+#    #+#             */
/*   Updated: 2021/09/19 12:52:39 by gcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	if (!number || !size)
		return (malloc(0));
	ptr = malloc(number * size);
	if (!ptr)
		return (malloc(0));
	ft_bzero(ptr, number * size);
	return (ptr);
}
