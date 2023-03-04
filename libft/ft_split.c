/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:02:12 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/11 16:49:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	ft_count(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{	
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			i++;
		}
	}
	return (i);
}

static void	malloc_word(const char *s, char **res, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			i = 0;
			while (*s != c && *s != '\0')
			{
				i++;
				s++;
			}
			res[word] = (char *)malloc((i + 1) * sizeof(char));
			word++;
		}
		else
			s++;
	}
}

static void	add_word(const char *s, char **res, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			i = 0;
			while (*s != c && *s != '\0')
			{
				res[word][i] = *s;
				i++;
				s++;
			}
			res[word][i] = '\0';
			word++;
		}
		else
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_count(s, c);
	ans = (char **)malloc((i + 1) * sizeof(char *));
	if (!ans)
		return (NULL);
	ans[i] = NULL;
	malloc_word(s, ans, c);
	add_word(s, ans, c);
	return (ans);
}
/* see in split first
 * char **ans to keep result from split
 * i = ft_count count how many word you have.
 * count by fisrt char it see and if next is , so ++
 * then malloc word
 */
