/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:12:02 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/28 20:34:33 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applique la fonction f a chaque caractere de la chaine de caracteres passee
**	en parametre. Chaque caractere est passe par adresse a la fonction f afin
**	de pouvoir être modifie si necessaire.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
		{
			f(s);
			s++;
		}
	}
}
