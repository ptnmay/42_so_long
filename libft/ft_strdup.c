/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:08:24 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/10 22:36:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*s2;

	s2 = (char *)malloc((ft_strlen(s1)) * sizeof(char) + 1);
	i = 0;
	if (!s2)
		return (0);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/* create s2 to duplicate (mean copy) s1
 * use malloc to have enough space(?) + 1 for \0
 * add s1 to s2 and add \0 and return s2
 * don't typecast s1 bc didn't change value in s1
 * unsigned int is only positive int
 */
