/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:59:38 by mbalayan          #+#    #+#             */
/*   Updated: 2023/01/26 00:14:37 by mbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	if (tmp == NULL)
		return (0);
	while (tmp->next != 0)
	{
		tmp = tmp->next;
		len++;
	}
	if (tmp->next == 0)
		len++;
	return (len);
}
