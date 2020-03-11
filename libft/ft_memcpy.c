/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:12:24 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/20 22:00:37 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*darray;
	unsigned char	*sarray;

	darray = dest;
	sarray = (void*)src;
	while (n--)
		*darray++ = *sarray++;
	return (dest);
}
