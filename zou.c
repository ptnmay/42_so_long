/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:59:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 22:09:05 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	nab_walk(t_mx *mlxx)
{
	mlxx->nabwalk++;
	ft_putstr_fd("zou le : ", 1);
	ft_putnbr_fd(mlxx->nabwalk, 1);
	write(1, "\n", 1);
}

int	tamlai_window(t_mx *mlxx)
{
	mlx_destroy_image(mlxx->mlx, mlxx->wall);
	mlx_destroy_image(mlxx->mlx, mlxx->player);
	mlx_destroy_image(mlxx->mlx, mlxx->collect);
	mlx_destroy_image(mlxx->mlx, mlxx->exit);
	mlx_destroy_window(mlxx->mlx, mlxx->window);
	exit(EXIT_SUCCESS);
}

int	check_zou(t_mx *mlxx, char **map, int x, int y)
{
	if (map[y][x] == '0' || map[y][x] == 'P' || map[y][x] == 'C' \
	|| map[y][x] == 'E')
	{
		if (map[y][x] == 'C')
		{
			mlxx->mlxxx->collect_c++;
			map[y][x] = '0';
		}
		if (map[y][x] == 'E')
		{
			if (mlxx->mlxxx->collect_c == mlxx->mlxxx->c)
				tamlai_window(mlxx);
		}
		nab_walk(mlxx);
		return (1);
	}
	if (map[y][x] == '1')
		return (0);
	return (0);
}

int	zou(int kc, t_mx *mlxx)
{
	int	x;
	int	y;

	x = mlxx->mlxxx->p_x;
	y = mlxx->mlxxx->p_y;
	if (kc == KEY_ESC)
		tamlai_window(mlxx);
	if ((kc == KEY_A || kc == 123) && (check_zou(mlxx, mlxx->mlxxx->twoarray, \
	x - 1, y)))
		pum_a_left(mlxx, x, y);
	if ((kc == KEY_D || kc == 124) && (check_zou(mlxx, mlxx->mlxxx->twoarray, \
	x + 1, y)))
		pum_d_right(mlxx, x, y);
	if ((kc == KEY_W || kc == 126) && (check_zou(mlxx, mlxx->mlxxx->twoarray, \
	x, y - 1)))
		pum_w_up(mlxx, x, y);
	if ((kc == KEY_S || kc == 125) && (check_zou(mlxx, mlxx->mlxxx->twoarray, \
	x, y + 1)))
		pum_s_down(mlxx, x, y);
	return (0);
}
