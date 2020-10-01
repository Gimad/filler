//
// Created by Gimad on 11.09.2020.
//
#include "../includes/filler.h"

int 	read_token(t_process *play)
{
	char *line;
	int	x;
	int	y;

	play->form = set_point(INT_MAX, INT_MAX);
	y = -1;
	play->token = (char **)malloc(sizeof(char *) * play->p_token.y);
	while (++y < play->p_token.y)
	{
		if (get_next_line(0, &line) > 0)
		{
			x = -1;
			play->token[y] = (char*)malloc(sizeof(char) * play->p_token.x);
			while (++x < play->p_token.x)
			{
				if (line[x] == '*' && play->form.y > y)
					play->form.y = y;
				if (line[x] == '*' && play->form.x > x)
					play->form.x = x;
				play->token[y][x] = line[x];
			}
			free(line);
		}
	}
	return (alg_answer(play));
}

int 	token_size(t_process *play)
{
	char *line;
	char *storage;

	if (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Piece", 5) == 0)
		{
			storage = ft_strchr(line, ' ');
			play->p_token.y = ft_atoi(++storage);
			storage = ft_strchr(storage, ' ');
			play->p_token.x = ft_atoi(++storage);
			free(line);
		}
	}
	return (read_token(play));
}

int 	read_map(t_process *play)
{
	int x;
	int y;
	char *line;

	y = -1;
	play->map = (char **)malloc(sizeof(char *) * play->p_map.y);
	while (++y < play->p_map.y)
	{
		if (get_next_line(0, &line) > 0)
		{
			x = -1;
			play->map[y] = (char*)malloc(sizeof(char) * play->p_map.x);
			while (++x < play->p_map.x)
				play->map[y][x] = line[x + 4];
			free(line);
		}
	}
	return (token_size(play));

}

int 	map_size(t_process *play)
{
	char *line;
	char *storage;

	if (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Plateau", 7) == 0)
		{
			storage = ft_strchr(line, ' ');
			play->p_map.y = ft_atoi(++storage);
			storage = ft_strchr(storage, ' ');
			play->p_map.x = ft_atoi(++storage);
			free(line);
			if (get_next_line(0, &line) > 0)
				free(line);
		}
	}
	return (read_map(play));
}
