/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:15:22 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/18 22:55:15 by bifrost          ###   ########.fr       */
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

void	tiny_sort_two(t_stack *stack_a)
{
	sa(stack_a);
	ft_free(&stack_a);
}
