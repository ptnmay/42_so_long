/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:02:01 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/11 19:16:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/* find the last c in *s (reverse) and
* return everything after last c
* const can't change value so typecast to char
* in while s[i] i++ can use string len to count len of s
* if s[i] = c return s[i] +i if not i-- untill it found c
* if no c in *s return NULL */
