/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:03:49 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/10 10:04:37 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}

t_stack	*ft_lstnew(int *data)
{
	t_stack	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	if (node)
		while (node->next)
			node = node->next;
	return (node);
}
