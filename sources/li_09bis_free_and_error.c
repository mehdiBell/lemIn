/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_09bis_free_and_error.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelloun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:22:53 by mbelloun          #+#    #+#             */
/*   Updated: 2019/02/21 21:23:01 by mbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	ft_free_room(t_lst *lst)
{
	t_room	*room;

	room = (t_room*)lst;
	free(room->name_room);
	free(room->tab);
}

void	ft_free_lst(t_lst *lst, void (*f)(t_lst *lst))
{
	t_lst	*free_lst;

	while (lst)
	{
		free_lst = lst;
		lst = lst->next;
		f(free_lst);
		free(free_lst);
	}
}

void	ft_free_all(t_all *elem)
{
	ft_free_lst((t_lst*)elem->room, ft_free_room);
}

int		ft_free_them(size_t n, ...)
{
	void	*del;
	va_list	ap;

	va_start(ap, n);
	while (n-- > 0)
	{
		free((del = va_arg(ap, void *)));
		del = NULL;
	}
	va_end(ap);
	return (1);
}

int		ft_free_tube(char **tab_tube, int i)
{
	while (i)
		free(tab_tube[--i]);
	free(tab_tube);
	return (ERROR);
}
