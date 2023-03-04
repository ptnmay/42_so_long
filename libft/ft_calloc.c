/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:20:29 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/11 18:09:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ans;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ans = malloc(count * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, count * size);
	return (ans);
}
/* malloc will malloc space but we don't know is anything in it
 * calloc will maoloc and set everything in that to be 0
 * size could be char, int (how many bytes)
 * count is could be str (how many char, int)
 */
