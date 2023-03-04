/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 22:39:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_value(t_gm *game)
{
	game->hight = 0;
	game->len = 0;
	game->c = 0;
	game->e = 0;
	game->p = 0;
}

void	c_check(t_gm *game, int c, char *checkline)
{
	if (c < 1)
	{
		free(checkline);
		ft_error("mei you collectible");
		free(game);
		exit(0);
	}
}

void	open_check(char *av, t_gm *game)
{
	int		fd;
	int		c;
	char	*checkline;

	game_value(game);
	fd = open(av, O_RDONLY);
	checkline = get_next_line(fd);
	c = check_five(checkline, game);
	game->len = ft_strlen_nonl(checkline);
	while (checkline)
	{
		free(checkline);
		checkline = get_next_line(fd);
		if (game->len != ft_strlen_nonl(checkline) && checkline != NULL)
		{
			ft_error("see liam a ni ya");
			independent_cl(game, checkline);
		}
		c = check_five(checkline, game);
		game->hight++;
	}
	c_check(game, c, checkline);
	free(checkline);
	close(fd);
}
