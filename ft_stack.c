/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:41:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/07 14:28:00 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	push_stack(t_list **lst, t_list *n)
{
	if (!n)
		return ;
	if (lst == NULL)
	{
		*lst = n;
		return ;
	}
	n->next = *lst;
	*lst = n;
}

t_list	*pop_stack(t_list **lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = *lst;
	*lst = (*lst)->next;
	return (tmp);
}
