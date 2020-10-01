//
// Created by Gimad on 28.09.2020.
//
#include "../includes/filler.h"

static int		check_point(t_process *play, char try_obj, t_cell try,
							  int *covers)
{
	if (try.y < 0 || try.x < 0 || try.y >= play->p_map.y || try.x >=
	play->p_map.x
		|| (try_obj != play->player && try_obj != play->player + 32
			&& try_obj != '.'))
		return (0);
	if (try_obj == play->player || try_obj == play->player + 32)
		(*covers)++;
	return (*covers < 2);
}

static int		try_place_token(t_process *play, t_cell current)
{
	t_cell	iterator;
	t_cell	try;
	int		covers;

	covers = 0;
	iterator.y = -1;
	while (++iterator.y < play->p_token.y)
	{
		iterator.x = -1;
		while (++iterator.x < play->p_token.x)
		{
			if (play->token[iterator.y][iterator.x] == '*')
			{
				try = set_point(iterator.x + current.x, iterator.y + current.y);
				if (try.x >= play->p_map.x || try.y >= play->p_map.y)
					return (0);
				if (!check_point(play, play->map[try.y][try.x], try, &covers))
					return (0);
			}
		}
	}
	return (covers == 1);
}

static unsigned	dist(t_process *play, t_cell player, t_cell enemy)
{
	t_cell		iterator;
	t_cell		cur;
	unsigned	dist;

	iterator.y = -1;
	dist = 0;
	while (++iterator.y < play->p_token.y)
	{
		iterator.x = -1;
		while (++iterator.x < play->p_token.x)
		{
			if (play->token[iterator.y][iterator.x] == '*')
			{
				cur = set_point(player.x + iterator.x, player.y + iterator.y);
				dist += calc_dist(enemy, cur);
			}
		}
	}
	return (dist);
}

static unsigned	best_dist(t_process *play, t_cell player)
{
	t_cell 		iterator;
	unsigned	curr;
	unsigned	best;

	best = INT_MAX;
	iterator.y = -1;
	while (++iterator.y < play->p_map.y)
	{
		iterator.x = -1;
		while (++iterator.x < play->p_map.x)
		{
			if (get_cell_type(play, play->map[iterator.y][iterator.x]) == ENEMY)
			{
				if ((curr = dist(play, player, iterator)) < best)
					best = curr;
			}
		}
	}
	return (best);
}

int 	alg_answer(t_process *play)
{
	t_cell 		answer;
	t_cell 		iterator;
	unsigned	curr;
	unsigned	best;

	answer = set_point(-1, -1);
	best = INT_MAX;
	iterator.y = -1 - play->form.y;
	while (++iterator.y < play->p_map.y)
	{
		iterator.x = -1 - play->form.x;
		while (++iterator.x < play->p_map.x)
		{
			if (try_place_token(play, iterator))
			{
				if ((curr = best_dist(play, iterator)) < best)
				{
					best = curr;
					answer = iterator;
				}
			}
		}
	}
	return (print_answer(answer));
}