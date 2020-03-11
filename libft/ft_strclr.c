/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:35:09 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/26 05:09:00 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Assigne la valeur ’\0’ a tous les caracteres de la chaine passee en
**	parametre.
*/

void	ft_strclr(char *s)
{
	size_t len;

	if (s)
	{
		len = ft_strlen(s);
		ft_bzero(s, len);
	}
}
