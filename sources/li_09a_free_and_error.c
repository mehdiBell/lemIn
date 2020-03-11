/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_09a_free_and_error.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelloun <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 05:32:29 by mbelloun          #+#    #+#             */
/*   Updated: 2019/02/25 20:26:13 by mbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		ft_error_tube(char ***tab_tube)
{
	int		i;

	i = -1;
	while ((*tab_tube)[++i])
		free((*tab_tube)[i]);
	ft_free_them(1, *tab_tube);
	return (ERROR);
}

void	ft_error(int nb)
{
	if (nb)
	{
		write(STDERR_FILENO, "ERROR\n", 6);
		exit(1);
	}
}

void	free_room(t_room *room)
{
	t_room	*tmp;

	while (room)
	{
		tmp = room->next;
		free(room->name_room);
		free(room->tab);
		free(room);
		room = tmp;
	}
}

void	free_bfs(t_files *tmp)
{
	free_path(tmp->path);
	free(tmp);
}

int		ft_multi_dash(char *line)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (line[i++])
		if (line[i] == '-')
			count++;
	return (count);
}
