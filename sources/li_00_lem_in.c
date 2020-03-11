/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_00_lem_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelloun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 05:30:15 by mbelloun          #+#    #+#             */
/*   Updated: 2019/02/18 05:30:18 by mbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int			check_map(t_all elem)
{
	if (elem.start_id == -1 || elem.end_id == -1)
		ft_error(1);
	else if (elem.start_id == elem.end_id)
		ft_error(1);
	return (1);
}

void		ft_free(t_all *elem, t_tab_path *tab)
{
	free_path(elem->shortest_path);
	ft_free_matrice(elem->matrice);
	ft_free_matrice_flow(elem->matrice_flow);
	free_tab_path(tab);
	free_room(elem->room);
}

int			main(int ac, char **av)
{
	t_all		elem;
	t_tab_path	*tab;

	tab = NULL;
	if (ft_read(&elem) == FAIL)
	{
		ft_free_all(&elem);
		ft_printf("ERROR\n");
		return (EXIT_FAILURE);
	}
	check_map(elem);
	elem.matrice_flow = create_matrice_flow(elem);
	tab = edmond_karp(&elem, elem.matrice,
	elem.matrice_flow, ft_init_start(&elem));
	if (!elem.shortest_path)
		ft_error(1);
	ft_bonus(ac, av, &elem);
	ft_print_infos(&elem);
	ft_dispatch(elem, tab);
	ft_free(&elem, tab);
}
