/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:39:39 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/18 13:31:41 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*lstnew(int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = nbr;
	node->next = NULL;
	return (node);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = lstlast(*lst);
	node->next = new;
}

void	lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*middleman;
	t_stack	**node;

	node = lst;
	while (*node)
	{
		middleman = (*lst)->next;
		lstdelone(*lst, del);
		*lst = middleman;
	}
}

void	lstdelone(t_stack *lst, void (*del)(void *))
{
	t_stack	*node;

	node = lst;
	del(node);
}

t_stack	*lstlast(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	if (node)
		while (node->next)
			node = node->next;
	return (node);
}
