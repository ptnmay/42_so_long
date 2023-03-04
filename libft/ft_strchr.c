/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:14:32 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/10 17:00:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	v;

	v = (char) c;
	while (*s && v != *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}
/* const char can't change value so have to typecast to be char
 * find the first c in *s and return everything after c
 * typecast int c to char c
 * return char 
 */
