/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:50:37 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/22 15:11:43 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (len <= lendst)
		return (lensrc + len);
	while (*dst && len-- > 1)
		dst++;
	while (*src && len-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (lensrc + lendst);
}
