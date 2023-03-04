/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:07:02 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/08 00:10:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		mod;
	int		count;

	count = ft_count(n);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	else
		result[0] = '0';
	result[count] = '\0';
	while (n)
	{
		mod = n % 10;
		if (mod < 0)
			mod *= -1;
		result[--count] = mod + '0';
		n /= 10;
	}
	return (result);
}
