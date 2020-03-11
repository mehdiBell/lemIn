/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:42:07 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/16 12:44:44 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (ch == '\0')
		return (str);
	return (NULL);
}
