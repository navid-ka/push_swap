/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:35:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/17 14:23:59 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_stack	*find_max(t_stack *stack)
{
	int		max;
	t_stack	*max_node;

	if (NULL == stack)
		return (NULL);
	max = INT_MIN;
	while (stack)
	{
		if (stack->data > max)
		{
			max = stack->data;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

static t_stack	*find_min(t_stack *stack)
{
	int		min;
	t_stack	*min_node;

	if (NULL == stack)
		return (NULL);
	min = INT_MAX;
	while (stack)
	{
		if (stack->data < min)
		{
			min = stack->data;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	tiny_sort_three(t_stack *a)
{
	t_stack	*max;

	max = find_max(a);
	if (a == max)
		ra(&a);
	else if (a->next == max)
		rra(&a);
	if (a->data > a->next->data)
		sa(a);
}

void	tiny_sort_four(t_stack *a, t_stack *b)
{
	t_stack	*min;

	b = NULL;
	min = find_min(a);
	if (a == min)
		rra(&a);
	pb(&a, &b);
	tiny_sort_three(a);
	pa(&a, &b);
}

void	tiny_sort_five(t_stack *a, t_stack *b)
{
	//t_stack	*min;
	//t_stack	*max;
	//int i = 2;
	b = NULL;
	//min = find_min(a);
	//max = find_max(a);
	//while (stack_sorted(a) != 1)
	//{
		printer(&a, &b);
		//while (i-- > 0)
		//{
			//printer(&a, &b);
			//pb(&a, &b);
		//}
		//printer(&a, &b);
		//tiny_sort_three(a);
		sa(a);
		printer(&a, &b);
		//pa(&a, &b);
		pb(&a, &b);
		pb(&a, &b);
		printer(&a, &b);
		rra(&a);
		printer(&a, &b);
		pa(&a, &b);
		tiny_sort_three(a);
		printer(&a, &b);
		pa(&a, &b);
		printer(&a, &b);
	//}
	printer(&a, &b);
}
