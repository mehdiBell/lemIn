/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:46:14 by bchaudry          #+#    #+#             */
/*   Updated: 2018/10/30 13:46:17 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstswap(t_list *a, t_list *b)
{
	t_list *tmp;

	if (a && b)
	{
		tmp = b->next;
		b->next = a;
		a->next = tmp;
	}
	return (a);
}
