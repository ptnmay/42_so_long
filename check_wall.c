/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 22:47:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_two(t_gm *game)
{
	int	x_len;

	x_len = 0;
	while (x_len < game->hight)
	{
		free(game->twoarray[x_len]);
		x_len++;
	}
	free(game->twoarray);
	free(game);
}

void	wallerror(t_gm *game, char *str)
{
	ft_error(str);
	independent_map(game);
	free_two(game);
	exit(0);
}

void	checkber_util(t_gm *game, char *av)
{
	game->namtuam_c = 0;
	open_check(av, game);
	srang_map(av, game);
	ff_namtuam(game, game->copy, game->p_x, game->p_y);
	me_e_mai(game);
}

void	check_wall(t_gm *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->hight)
	{
		if ((game->twoarray[i][0] == '1') && \
		(game->twoarray[i][game->len - 1] == '1'))
			i++;
		else
			wallerror(game, "wall isn't wall");
	}
	j = 0;
	while (j < game->len)
	{
		if ((game->twoarray[0][j] == '1') && \
		(game->twoarray[game->hight - 1][j] == '1'))
			j++;
		else
			wallerror(game, "wall isn't all 1");
	}
}
