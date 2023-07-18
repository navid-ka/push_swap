/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:39:39 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/18 22:48:39 by bifrost          ###   ########.fr       */
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

t_stack	*lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (!new)
	{
		ft_free(lst);
		return (NULL);
	}
	if (!*lst)
	{
		*lst = new;
		return (*lst);
	}
	node = lstlast(*lst);
	node->next = new;
	return (*lst);
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
	(void)del;
	free(node);
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
