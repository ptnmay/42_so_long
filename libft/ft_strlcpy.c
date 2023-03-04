/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:34:59 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/11 19:14:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)

{
	size_t	i;

	i = 0;
	if (!dst)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
	else
		return (ft_strlen(src));
}
/* while size - 1 bc '\0' copy src to dst follow by size
 * size_t unsigned type cannot represent negative values(<0).
 * example, string len returns a size_t because len of str has to be at least 0
 * len src 5 size 8 it cpy all src have */
