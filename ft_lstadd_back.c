/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:43:19 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/07 14:21:59 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*lp;

	if (!lst || !n)
		return ;
	lp = *lst;
	if (!*lst)
	{
		*lst = n;
		return ;
	}
	lp = ft_lstlast(*lst);
	lp->next = n;
}
