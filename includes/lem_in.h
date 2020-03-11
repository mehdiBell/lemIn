/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 06:16:09 by bchaudry          #+#    #+#             */
/*   Updated: 2019/03/01 16:13:40 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# define SUCCESS							0
# define ERROR								1
# define FAIL								2
# define NOT_A_VALID_BONUS 					1
# define ERROR_ANT_IS_NOT_A_NUMBER 			2
# define ERROR_IS_NOT_A_POSITIVE_INTEGER 	3
# define ERROR_IS_NOT_A_VALID_FILE 			4
# define ERROR_IS_NOT_A_VALID_LEM 			5
# define BONUS								0

# include "libft.h"

typedef enum			e_status
{
	START, END, NOT
}						t_status;

typedef enum			e_available
{
	VISITED, NO_VISITED, POSSIBLE_PATH, PATH
}						t_available;

typedef struct			s_map
{
	struct s_map		*next;
	char				*str;
}						t_map;

typedef	struct			s_room
{
	int					room_id;
	char				*name_room;
	int					coord_x_room;
	int					coord_y_room;
	int					bfs;
	struct s_room		*prev;
	struct s_room		*next;
	struct s_room		**tab;
	t_status			status;
	t_available			available;
}						t_room;

typedef struct			s_path
{
	t_room				*room;
	struct s_path		*prev;
	struct s_path		*next;
}						t_path;

typedef struct			s_tab_path
{
	t_path				*path;
	int					path_size;
	int					nb_ant;
	int					difference;
	int					capacity;
	struct s_tab_path	*prev;
	struct s_tab_path	*next;
}						t_tab_path;

typedef struct			s_ant
{
	t_path				*path;
	t_path				*tmp_path;
	int					nb;
	struct s_ant		*prev;
	struct s_ant		*next;
}						t_ant;

typedef struct			s_all
{
	int					number_ants;
	int					number_rooms;
	t_room				*room;
	int					next_is_start;
	int					next_is_end;
	t_map				*map;
	t_room				*cur;
	t_room				***matrice;
	int					**matrice_flow;
	int					matrice_init;
	int					start_id;
	int					end_id;
	t_path				*shortest_path;
	int					bfs;
	int					line_pb;
	int					nb_ant_to_color;
	int					show_line;
}						t_all;

typedef struct			s_lst
{
	struct s_lst		*next;
}						t_lst;

typedef struct			s_files
{
	t_room				*room;
	t_path				*path;
	int					n;
	struct s_files		*next;
}						t_files;

/*
**	li_01 Parse Tools
*/

void					ft_status_update(t_all *elem, t_room *tmp);
int						ft_room(t_all *elem, char **tab_coor);
int						ft_one_line_tube_or_room(t_all *elem, char *line);
int						ft_get_instructions(t_all *elem, char *line);

/*
**	li_01bis Parse Tools
*/

int						ft_realloc_room_tab(t_room ***tab, t_room *room);
int						ft_tube_aux(t_all *elem, t_room **tmp, t_room **cur);
int						ft_tube(t_all *elem, char *line);
int						ft_check_nb(char *s, int *nb);
int						ft_check_nb_ants(t_all *elem, char *str, int *i);

/*
**	li_01ter Parse Tools
*/

void					ft_init_elem(t_all *elem);
int						ft_read(t_all *elem);

/*
**	li_02 begin
*/

void					ft_save_map(t_all *elem, char *line);
void					push_file(t_files **files, t_room *room, t_path *path);
t_files					*pop_file(t_files **file);
void					add_path_to_tab(t_tab_path **tab, t_path *path);
void					free_file(t_files *file);

/*
**	li_03 Algo
*/

t_tab_path				*edmond_karp(t_all *elem, t_room ***matrice,
							int **matrice_flow, t_room *start);

/*
**	li_05 dipatch
*/

void					ft_dispatch(t_all elem, t_tab_path *tab);
void					ft_print_infos(t_all *elem);

/*
**	li_05bis dispatch and algo tools
*/

t_path					*return_bfs(t_files *file, t_files *tmp);
int						ft_nb_path(t_all elem, t_tab_path *tab, int i, int c);
void					add_ant(t_ant **ant, int nb, t_path *path);
void					ft_print_infos(t_all *elem);

/*
**	li_06_tab_path_tools
*/

void					free_tab_path(t_tab_path *tab);
void					free_path(t_path *path);
t_tab_path				*remove_bad_path(t_tab_path *tab);
int						tab_size(t_tab_path *tab);

/*
**	li_09a Free and error
*/

void					ft_free_room(t_lst *lst);
void					free_room(t_room *room);
void					ft_free_lst(t_lst *lst, void (*f)(t_lst *lst));
void					ft_free_all(t_all *elem);
int						ft_free_them(size_t n, ...);
int						ft_error_tube(char ***tab_tube);
void					ft_error(int nb);
void					ft_free_path(t_lst *lst);
int						ft_free_tube(char **tab_tube, int i);
void					free_bfs(t_files *tmp);
int						ft_multi_dash(char *line);

/*
**	li_09b Search and Init Tools
*/

t_room					*ft_init_start(t_all *elem);
t_room					*ft_init_end(t_all *elem);
void					ft_set_matrice(t_room **tmp, t_room **cur,
							t_room ***matrice);
t_room					***ft_init_matrice(int number_rooms);
void					ft_find_room(t_room **tmp, char *room);

/*
**	li_09c Matrice Tools
*/

t_room					***matrice_cpy(t_all elem, t_room ***matrice);
void					ft_free_matrice(t_room ***matrice);
void					ft_free_matrice_flow(int **matrice);
int						**create_matrice_flow(t_all elem);
int						**matrice_flow_cpy(t_all elem, int **matrice);

/*
**	li_09d Path Tools
*/

void					add_path(t_path **path, t_room *room);
t_path					*path_cpy(t_path *path);
int						compare_path(t_path *path1, t_path *path2);
int						is_not_in_path(t_path *path, t_room *room);
int						path_size(t_path *path);

/*
**	li_09e_bonus
*/

void					ft_bonus(int ac, char **av, t_all *elem);
void					ft_print_matrice(t_all *elem);

#endif
