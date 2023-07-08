/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:41:30 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 14:18:02 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	middleman;
	int	i;
	int	j;

	if (stack_b->len <= 0)
		return ;
	middleman = stack_b->data[0];
	i = 0;
	while (i < stack_b->len - 1)
	{
		stack_b->data[i] = stack_b->data[i + 1];
		i++;
	}
	stack_b->len--;

	j = stack_a->len;
	while (j > 0)
	{
		stack_a->data[j] = stack_a->data[j - 1];
		j--;
	}
	stack_a->data[0] = middleman;
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
	middleman = stack_a->data[0];
	i = 0;
	while (i < stack_a->len - 1)
	{
		stack_a->data[i] = stack_a->data[i + 1];
		i++;
	}
	stack_a->len--;
	j = stack_b->len;
	while (j > 0)
	{
		stack_b->data[j] = stack_b->data[j - 1];
		j--;
	}
	stack_b->data[0] = middleman;
	stack_b->len++;
	write(1, "pb\n", 3);
}
