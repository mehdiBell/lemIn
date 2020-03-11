/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:45:33 by bchaudry          #+#    #+#             */
/*   Updated: 2018/10/30 13:45:37 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*buff;

	if (begin_list == 0)
		return (0);
	buff = begin_list;
	while (buff->next)
	{
		buff = buff->next;
	}
	return (buff);
}
