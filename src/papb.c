/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:41:30 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/06 20:12:22 by bifrost          ###   ########.fr       */
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
	int	i;
	int	len_aux;
	int	middleman;

	i = 0;
	middleman = stack_a->arr[0];
	while (i < stack_a->len - 1)
	{
		stack_a->arr[i] = stack_a->arr[i + 1];
		i++;
	}
	len_aux = stack_a->len;
	while (len_aux)
	{
		stack_a->arr[len_aux] = stack_a->arr[len_aux - 1];
		len_aux--;
	}
	stack_b->arr[0] = middleman;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	len_aux;
	int	middleman;

	i = 0;
	middleman = stack_b->arr[0];
	while (i < stack_b->len - 1)
	{
		stack_b->arr[i] = stack_b->arr[i + 1];
		i++;
	}
	len_aux = stack_b->len;
	while (len_aux)
	{
		stack_b->arr[len_aux] = stack_b->arr[len_aux - 1];
		len_aux--;
	}
	stack_a->arr[0] = middleman;
	write(1, "pb\n", 3);
}
