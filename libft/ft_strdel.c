/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:09:31 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/26 05:05:53 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Prend en parametre l’adresse d’une chaine de caracteres qui doit etre
**	liberee avec free(3) et son pointeur mis a NULL.
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		ft_memdel((void **)as);
	}
}
