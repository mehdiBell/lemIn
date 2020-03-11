/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 03:16:00 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/29 02:28:34 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Ajoute l'element new en tete de la liste.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst)
	{
		new->next = *alst;
	}
	else
		new->next = NULL;
	*alst = new;
}
