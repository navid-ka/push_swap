/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:39:39 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/16 18:57:25 by bifrost          ###   ########.fr       */
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

t_stack	*lstlast(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	if (node)
		while (node->next)
			node = node->next;
	return (node);
}

void	lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

int	lstsize(t_stack *lst)
{
	int		i;
	t_stack	*node;

	i = 0;
	node = lst;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
