//
// Created by Gimad on 01.10.2020.
//

#include "../includes/filler.h"

unsigned	calc_dist(t_cell a, t_cell b)
{
	return (ft_abs(a.x - b.x) + ft_abs(a.y - b.y));
}

t_cell		set_point(int x, int y)
{
	t_cell	pos;

	pos.x = x;
	pos.y = y;
	return (pos);
}

int			get_cell_type(t_process *play, char cell)
{
	const char	player = play->player;
	const char	enemy = (char)(player == 'X' ? 'O' : 'X');

	if (cell == '.')
		return (EMPTY);
	else if (cell == player || cell == player + 32)
		return (PLAYER);
	else if (cell == enemy || cell == enemy + 32)
		return (ENEMY);
	else
		return (UNDEFINED);
}

int			print_answer(t_cell answer)
{
	if (answer.y == -1 && answer.x == -1)
	{
		ft_putstr("0 0\n");
		return (0);
	}
	ft_putnbr(answer.y);
	ft_putchar(' ');
	ft_putnbr(answer.x);
	ft_putchar('\n');
	return (1);
}
