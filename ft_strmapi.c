/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:08:22 by mbalayan          #+#    #+#             */
/*   Updated: 2023/01/26 23:08:17 by mbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*re;
	size_t	len;

	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	i = 0;
	re = malloc(len * sizeof(char) + 1);
	if (!re)
		return (NULL);
	while (s[i] != 0)
	{
		re[i] = (*f)(i, s[i]);
		i++;
	}
	re[i] = 0;
	return (re);
}
