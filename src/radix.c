/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:23:33 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/15 02:58:58 by bifrost          ###   ########.fr       */
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

int	find_min_num(t_stack *stack_a)
{
	t_stack	*min_int;
	t_stack	*current;

	min_int = stack_a;
	current = stack_a;
	while (min_int->idx != -1)
		min_int = min_int->next;
	while (current != NULL)
	{
		if (current->idx == -1 && current->data <= min_int->data)
		{
			min_int = current;
		}
		current = current->next;
	}
	return (min_int->data);
}

int	ft_find_index(t_stack *stack_a)
{
	int		i;
	t_stack	*aux;

	aux = stack_a;
	i = -1;
	while (aux != NULL)
	{
		if (aux->idx != -1)
		{
			if (aux->idx > i)
				i = aux->idx;
		}
		aux = aux->next;
	}
	return (i);
}

t_stack	*ft_index(t_stack *stack_a, int count)
{
	t_stack	*aux;
	int		min;
	int		idx;

	min = find_min_num(stack_a);
	idx = (ft_find_index(stack_a)) + 1;
	aux = stack_a;
	while (aux != NULL)
	{
		if (aux->idx == -1)
		{
			if (aux->data == min)
			{
				aux->idx = idx;
				min++;
				idx++;
			}
		}
		aux = aux->next;
	}
	aux = stack_a;
	if ((index_is_sort(aux, count)) == 1)
		ft_index(aux, count);
	return (aux);
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

