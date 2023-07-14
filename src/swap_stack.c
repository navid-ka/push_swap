/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:15:22 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/14 12:53:47 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(int *a, int *b)
{
	int	middleman;

	middleman = *a;
	*a = *b;
	*b = middleman;
}

void	sa(t_stack *stack_a)
{
	swap(&stack_a->data, &stack_a->next->data);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	swap(&stack_b->data, &stack_b->next->data);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(&stack_a->data, &stack_a->next->data);
	swap(&stack_b->data, &stack_b->next->data);
	write(1, "ss\n", 3);
}
