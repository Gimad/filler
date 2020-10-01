#include "../includes/filler.h"
#include <fcntl.h>

int main(void)
{
	t_process	play;
	char 		*line;
	int 		process;

	ft_bzero(&play, sizeof(play));
	if (get_next_line(0, &line) > 0)
	{
		if (!ft_strncmp(line, "$$$", 2))
		{
			if (ft_strstr(line, "p2"))
				play.player = 2;
			if (ft_strstr(line, "p1"))
				play.player = 1;
			play.player = (char)(line[10] == '1' ? 'O' : 'X');
			free(line);
		}
	}
	while ((process = map_size(&play)) == 1)
		;
	return (!process);
}
