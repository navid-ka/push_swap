/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:41:30 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/06 22:10:35 by bifrost          ###   ########.fr       */
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

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	middleman;
	int	i;
	int	j;

	if (stack_b->len <= 0)
		return ;
	middleman = stack_b->arr[0];
	i = 0;
	while (i < stack_b->len - 1)
	{
		stack_b->arr[i] = stack_b->arr[i + 1];
		i++;
	}
	stack_b->len--;

	j = stack_a->len;
	while (j > 0)
	{
		stack_a->arr[j] = stack_a->arr[j - 1];
		j--;
	}
	stack_a->arr[0] = middleman;
	stack_a->len++;
	write(1, "pa\n", 3);
}


void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	j;
	int	middleman;
	int	i;

	if (stack_a->len <= 0)
		return ;
	middleman = stack_a->arr[0];
	i = 0;
	while (i < stack_a->len - 1)
	{
		stack_a->arr[i] = stack_a->arr[i + 1];
		i++;
	}
	stack_a->len--;
	j = stack_b->len;
	while (j > 0)
	{
		stack_b->arr[j] = stack_b->arr[j - 1];
		j--;
	}
	stack_b->arr[0] = middleman;
	stack_b->len++;
	write(1, "pb\n", 3);
}
