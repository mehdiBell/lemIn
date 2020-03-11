/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 23:32:36 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/24 22:30:11 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_overlap_in_memory(void *dst, const void *src, size_t len)
{
	while (len--)
	{
		if (src == dst)
			return (1);
		src++;
	}
	return (0);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (ft_overlap_in_memory(dst, src, len))
	{
		csrc += len;
		cdst += len;
		while (len--)
			*--cdst = *--csrc;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
