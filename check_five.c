/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:59:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 22:43:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	independent_cl(t_gm *game, char *checkline)
{
	free(checkline);
	free(game);
	exit(0);
}

int	check_five(char *checkline, t_gm *game)
{
	int	i;

	i = 0;
	while (checkline != NULL && checkline[i] != '\0' && checkline[i] != '\n')
	{
		if (ft_strchr("01CEP\n", checkline[i]) == NULL)
		{
			ft_error("there is sth i don't want");
			independent_cl(game, checkline);
		}
		if (checkline[i] == 'P')
			game->p++;
		if (checkline[i] == 'C')
			game->c++;
		if (checkline[i] == 'E')
			game->e++;
		i++;
	}
	if (checkline == NULL && (game->p != 1 || game->e != 1))
	{
		ft_error("check P or E");
		independent_cl(game, checkline);
	}
	return (game->c);
}
