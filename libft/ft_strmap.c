/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:27:37 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/29 02:12:36 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Applique la fonction f a chaque caractere de la chaine de caracteres passee
**	en parametre pour creer une nouvelle chaine “fraiche” avec malloc(3)
**	resultant des applications successives de f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	len;
	int		i;

	i = 0;
	new = NULL;
	if (s && f)
	{
		len = ft_strlen(s);
		if ((new = ft_strnew(len)))
		{
			while (s[i])
			{
				new[i] = f(s[i]);
				i++;
			}
		}
	}
	return (new);
}
