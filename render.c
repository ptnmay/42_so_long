/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:37:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/21 23:17:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	if_in_render(t_gm *game, t_mx *mlxx, int x, int y)
{
	if (game->twoarray[y][x] == '1')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, \
		mlxx->wall, x * 64, y * 64);
	if (game->twoarray[y][x] == '0' || game->twoarray[y][x] == 'P' || \
		game->twoarray[y][x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, \
		mlxx->field, x * 64, y * 64);
	if (game->twoarray[y][x] == 'P')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, \
		mlxx->player, x * 64, y * 64);
	if (game->twoarray[y][x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, \
		mlxx->exit, x * 64, y * 64);
	if (game->twoarray[y][x] == 'C')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, \
		mlxx->collect, x * 64, y * 64);
}

t_mx	*mairu(void)
{
	t_mx	*mlxx;

	mlxx = malloc(sizeof(t_mx));
	mlxx->nabwalk = 0;
	mlxx->mlx = mlx_init();
	return (mlxx);
}

void	init_photo(t_gm *game, t_mx *mlxx)
{
	mlxx->wall = mlx_xpm_file_to_image(mlxx->mlx, "./img/mountain.xpm", \
	&game->len, &game->hight);
	mlxx->player = mlx_xpm_file_to_image(mlxx->mlx, "./img/kuromi.xpm", \
	&game->len, &game->hight);
	mlxx->collect = mlx_xpm_file_to_image(mlxx->mlx, "./img/sea.xpm", \
	&game->len, &game->hight);
	mlxx->exit = mlx_xpm_file_to_image(mlxx->mlx, "./img/castle.xpm", \
	&game->len, &game->hight);
	mlxx->field = mlx_xpm_file_to_image(mlxx->mlx, "./img/field.xpm", \
	&game->len, &game->hight);
}

void	render(t_gm *game)
{
	t_mx	*mlxx;
	int		x;
	int		y;

	y = 0;
	mlxx = mairu();
	mlxx->window = mlx_new_window(mlxx->mlx, (game->len * 64), \
	game->hight * 64, "so_long");
	mlxx->mlxxx = game;
	init_photo(game, mlxx);
	while (game->twoarray[y])
	{
		x = 0;
		while (game->twoarray[y][x] != '\n' && game->twoarray[y][x] != '\0')
		{
			if_in_render(game, mlxx, x, y);
			x++;
		}
		y++;
	}
	mlx_hook(mlxx->window, 17, 0L, tamlai_window, mlxx);
	mlx_key_hook(mlxx->window, zou, mlxx);
	mlx_loop(mlxx->mlx);
}
