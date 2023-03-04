/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:18:07 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/11 21:52:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/* it's like peeling banana
 * peel set out of *s1
 * anything in set is = the first or last s1 peel it out
 * all set = the first or last  s1 peel it out
 * in while 1 stringchr set, *s1 if yes go to next while
 * i = stringlen(s1)
 * while 2 stringchr from back if yes
 * return substring s1 start 0 by i + 1(for \0) len 
 */
