/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/14 19:56:24 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_sorted(t_stack *stack)
{
	if (NULL == stack)
		return (0);
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (1);
		stack = stack->next;
	}
	return (0);
}


int	is_dup(t_stack *a, int nbr)
{
	if (NULL == a)
		return (0);
	while (a)
	{
		if (a->data == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

t_stack	*find_last_node(t_stack *head)
{
	if (NULL == head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

static void	populate_stack(t_stack **stack, int nbr)
{
	t_stack	*node;
	t_stack	*last_node;

	if (NULL == stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (NULL == node)
		return ;
	node->next = NULL;
	node->data = nbr;
	if (NULL == *stack)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	stack_init(t_stack **a, char **argv)
{
	long long	nbr;
	int			i;

	i = 0;
	while (argv[i])
	{
		nbr = psatoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_exit();
		if (is_dup(*a, nbr))
			error_exit();
		populate_stack(a, nbr);
		++i;
	}
}
