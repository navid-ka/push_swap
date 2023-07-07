/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:15:22 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 00:15:38 by bifrost          ###   ########.fr       */
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
	swap(&stack_a->arr[0], &stack_a->arr[1]);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	swap(&stack_b->arr[0], &stack_b->arr[1]);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(&stack_a->arr[0], &stack_a->arr[1]);
	swap(&stack_b->arr[0], &stack_b->arr[1]);
	write(1, "ss\n", 3);
}