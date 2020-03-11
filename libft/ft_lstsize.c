/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:45:52 by bchaudry          #+#    #+#             */
/*   Updated: 2018/10/30 13:45:53 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_lstsize(t_list *begin_list)
{
	int		i;
	t_list	*buff;

	buff = begin_list;
	i = 0;
	if (begin_list)
	{
		while (buff != NULL)
		{
			i++;
			buff = buff->next;
		}
	}
	return (i);
}
