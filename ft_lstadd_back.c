/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:43:19 by lhojoon           #+#    #+#             */
/*   Updated: 2023/11/10 15:22:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lp;

	if (!lst || !new)
		return ;
	lp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
		(*lst) = lp->next;
	(*lst)->next = new;
	*lst = lp;
}
