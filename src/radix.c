/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:23:33 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/17 21:40:45 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	index_is_sort(t_stack *stack_a, int count)
{
	int	i;

	i = 0;
	while (stack_a != NULL)
	{
		if (stack_a->idx != -1)
			i++;
		stack_a = stack_a->next;
	}
	if (i != count)
		return (1);
	return (0);
}

static int	find_min(t_stack *stack_a)
{
	t_stack	*min;
	t_stack	*current;

	min = stack_a;
	current = stack_a;
	while (min->idx != -1)
		min = min->next;
	while (current != NULL)
	{
		if (current->idx == -1 && current->data <= min->data)
		{
			min = current;
		}
		current = current->next;
	}
	return (min->data);
}

int	find_index(t_stack *stack_a)
{
	int		i;
	t_stack	*temp;

	temp = stack_a;
	i = -1;
	while (temp != NULL)
	{
		if (temp->idx != -1)
		{
			if (temp->idx > i)
				i = temp->idx;
		}
		temp = temp->next;
	}
	return (i);
}

t_stack	*stack_index(t_stack *stack_a, int count)
{
	t_stack	*temp;
	int		min;
	int		idx;

	min = find_min(stack_a);
	idx = (find_index(stack_a)) + 1;
	temp = stack_a;
	while (temp != NULL)
	{
		if (temp->idx == -1)
		{
			if (temp->data == min)
			{
				temp->idx = idx;
				min++;
				idx++;
			}
		}
		temp = temp->next;
	}
	temp = stack_a;
	if ((index_is_sort(temp, count)) == 1)
		stack_index(temp, count);
	return (temp);
}

t_stack	*radix(t_stack *stack_a, t_stack *stack_b)
{
	int		bit;
	int		i;
	t_stack	*temp;

	temp = stack_a;
	bit = 1;
	while (stack_sorted(stack_a) != 1)
	{
		i = lstsize(stack_a);
		while (i > 0 && temp != NULL)
		{
			if (temp->idx & bit)
				ra(&stack_a);
			else
				pb(&stack_a, &stack_b);
			temp = stack_a;
			i--;
		}
		while (lstsize(stack_b))
			pa(&stack_a, &stack_b);
		temp = stack_a;
		bit = bit << 1;
		i--;
	}
	return (stack_a);
}

