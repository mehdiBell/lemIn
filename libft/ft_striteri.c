/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:20:07 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/28 20:19:15 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applique la fonction f a chaque caractere de la chaine de caracteres passee
**	en parametre en precisant son index en premier argument. Chaque caractere
**	est passe par adresse a la fonction f afin de pouvoir etre modifie si
**	necessaire.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
