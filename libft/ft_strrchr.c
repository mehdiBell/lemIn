/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:46:08 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/16 12:49:12 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*last;

	ch = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == ch)
			last = (char *)s;
		s++;
	}
	if (ch == '\0')
		last = (char *)s;
	return (last);
}
