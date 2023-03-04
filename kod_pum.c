/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kod_pum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 03:36:39 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/21 22:14:46 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	pum_a_left(t_mx *mlxx, int x, int y)
{
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->field, \
	(x * 64), (y * 64));
	if (mlxx->mlxxx->twoarray[mlxx->mlxxx->p_y][mlxx->mlxxx->p_x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->exit, \
		(mlxx->mlxxx->p_x * 64), (mlxx->mlxxx->p_y * 64));
	x--;
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->player, \
	(x * 64), (y * 64));
	mlxx->mlxxx->p_x = x;
}

void	pum_d_right(t_mx *mlxx, int x, int y)
{
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->field, \
	(x * 64), (y * 64));
	if (mlxx->mlxxx->twoarray[mlxx->mlxxx->p_y][mlxx->mlxxx->p_x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->exit, \
		(mlxx->mlxxx->p_x * 64), (mlxx->mlxxx->p_y * 64));
	x++;
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->player, \
	(x * 64), (y * 64));
	mlxx->mlxxx->p_x = x;
}

void	pum_w_up(t_mx *mlxx, int x, int y)
{
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->field, \
	(x * 64), (y * 64));
	if (mlxx->mlxxx->twoarray[mlxx->mlxxx->p_y][mlxx->mlxxx->p_x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->exit, \
		(mlxx->mlxxx->p_x * 64), (mlxx->mlxxx->p_y * 64));
	y--;
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->player, \
	(x * 64), (y * 64));
	mlxx->mlxxx->p_y = y;
}

void	pum_s_down(t_mx *mlxx, int x, int y)
{
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->field, \
	(x * 64), (y * 64));
	if (mlxx->mlxxx->twoarray[mlxx->mlxxx->p_y][mlxx->mlxxx->p_x] == 'E')
		mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->exit, \
		(mlxx->mlxxx->p_x * 64), (mlxx->mlxxx->p_y * 64));
	y++;
	mlx_put_image_to_window(mlxx->mlx, mlxx->window, mlxx->player, \
	(x * 64), (y * 64));
	mlxx->mlxxx->p_y = y;
}
