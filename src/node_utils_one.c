/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:39:39 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/18 16:59:06 by nkeyani-         ###   ########.fr       */
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
	//del(node);
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

/*void	ft_free(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;
	t_stack	*next;

	aux = *stack_a;
	while (aux != NULL)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
	*stack_a = NULL;
	aux = *stack_b;
	while (aux != NULL)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
	*stack_b = NULL;
}*/
