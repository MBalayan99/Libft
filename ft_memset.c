/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:24:23 by mbalayan          #+#    #+#             */
/*   Updated: 2023/01/21 20:24:48 by mbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (ptr == NULL)
		return (NULL);
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}
#include <stdio.h>
int main()
{
	char *s = NULL;
	printf("%s",ft_memset(s,'7',4));


}