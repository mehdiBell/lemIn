/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 22:14:23 by bchaudry          #+#    #+#             */
/*   Updated: 2017/11/29 02:07:33 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	Affiche le caractere c sur le file descriptor passé en paramètre.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
