/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:12:05 by mbalayan          #+#    #+#             */
/*   Updated: 2023/01/26 22:56:20 by mbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t block, size_t size)
{
	size_t	max;
	void	*ptr;

	if (block == SIZE_MAX || size == SIZE_MAX)
		return (0);
	max = block * size;
	ptr = malloc(max);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, max);
	return (ptr);
}
