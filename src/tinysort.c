/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:35:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/18 18:07:54 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min(t_stack *a)
{
	int		i;
	t_stack	*p;

	i = 0;
	p = a;
	i = p->idx;
	while (p != NULL)
	{
		if (i > p->idx)
			i = p->idx;
		p = p->next;
	}
	return (i);
}

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack)
	{
		if (stack->data > max->data)
			max = stack;
		stack = stack->next;
	}
	return (max);
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
	ft_free(&a);
}

void	tiny_sort_four(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (a->idx > find_min(a))
			ra(&a);
		else if (a->idx > find_min(a))
			rra(&a);
		else
		{
			pb(&a, &b);
			i++;
		}
	}
	if (a->idx != find_min(a))
		sa(a);
	while (b != NULL)
		pa(&a, &b);
	printer(&a, &b);
	ft_free(&a);
}

void	tiny_sort_five(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (a->idx > find_min(a))
			ra(&a);
		else if (a->idx > find_min(a))
			rra(&a);
		else
		{
			pb(&a, &b);
			i++;
		}
	}
	if (a->idx != find_min(a))
		sa(a);
	while (b != NULL)
		pa(&a, &b);
	ft_free(&a);
}
