/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 22:25:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_fd(t_gm *game)
{
	free(game);
	ft_error("map wrong");
	exit(0);
}

void	util(t_gm *game, int mode, int i)
{
	if (mode == 0)
	{
		ft_error("1error");
		free(game->twoarray);
		free(game->copy);
		free(game);
		exit(0);
	}
	else if (mode == 1)
	{
		free(game->copy[i]);
		free(game);
		ft_error("3error");
		exit(0);
	}
}

void	srang_map(char *av, t_gm *game)
{
	int		fd;
	int		i;
	char	*tmp;

	i = -1;
	fd = open(av, O_RDONLY);
	if (fd < 0)
		free_fd(game);
	game->twoarray = malloc(sizeof(char *) * (game->hight + 1));
	game->copy = malloc(sizeof(char *) * (game->hight + 1));
	if (!game->twoarray && !game->copy)
		util(game, 0, i);
	while (++i < game->hight)
	{
		tmp = get_next_line(fd);
		game->twoarray[i] = tmp;
		game->copy[i] = ft_strdup(tmp);
		if (!game->copy[i])
			util(game, 1, i);
	}
	game->twoarray[i] = NULL;
	game->copy[i] = NULL;
	close(fd);
	check_wall(game);
	p_u_nee(game);
}
