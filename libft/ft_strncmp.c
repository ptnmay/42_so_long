/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:47:25 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/12 01:21:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (i < n) && (s1[i] == s2[i]))
			i++;
	if (i < n)
		return (((unsigned char)(s1[i])) - ((unsigned char)(s2[i])));
	else
		return (0);
}
/* unsigned char no negative ascii only 0-255 8 bit? byte? same as char
 * const char can't change value so typecast to be unsigned char
 * to compare it can cmp only positive number
 * cmp s1 and s2 follow by n
 * cmp only the first that's != then return s1[i] - s2[i]
 * different from mem cmp is
 * this ft point to value and cmp
 */
