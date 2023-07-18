/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:41:30 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/18 18:01:00 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*middleman;

	if (!stack_a || !stack_b)
		error_exit();
	middleman = *stack_b;
	*stack_b = middleman->next;
	lstadd_front(stack_a, middleman);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*middleman;

	if (!stack_a || !stack_b)
		error_exit();
	middleman = *stack_a;
	*stack_a = (*stack_a)->next;
	lstadd_front(stack_b, middleman);
	write(1, "pb\n", 3);
}

void	ra(t_stack **stack_a)
{
	t_stack	*current;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		current = *stack_a;
		while (current->next != NULL)
			current = current->next;
		current->next = *stack_a;
		*stack_a = (*stack_a)->next;
		current->next->next = NULL;
	}
	write(1, "ra\n", 3);
}

void	rra(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*prev;

	current = *stack_a;
	prev = NULL;
	if (current == NULL || current->next == NULL)
		return ;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack_a;
	*stack_a = current;
	prev->next = NULL;
	write(1, "rra\n", 4);
}
