/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:59:42 by psaeyang          #+#    #+#             */
/*   Updated: 2022/08/12 01:01:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*keep;

	while (*lst)
	{
		keep = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = keep;
	}
	*lst = NULL;
}
/* little node inside big node
 */
