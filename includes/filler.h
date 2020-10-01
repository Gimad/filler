//
// Created by Gimad on 01.09.2020.
//

#ifndef FILLER_FILLER_H
# define FILLER_FILLER_H

#include "../libft/libft.h"
#include "get_next_line.h"

enum			e_cell_type
{
	EMPTY,
	PLAYER,
	ENEMY,
	UNDEFINED
};


typedef struct		s_cell
{
	int 	x;
	int 	y;
} 					t_cell;

typedef struct		s_process
{
	char	**map;
	char	**token;
	t_cell		p_map;
	t_cell		p_token;
	t_cell 	form;
	char 	player;

}					t_process;

int				map_size(t_process *play);
int 			alg_answer(t_process *play);
t_cell			set_point(int x, int y);
unsigned		calc_dist(t_cell a, t_cell b);
int				get_cell_type(t_process *play, char cell);
int				print_answer(t_cell answer);
#endif
