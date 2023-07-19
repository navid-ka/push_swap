/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:10 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/19 16:42:00 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft/include/libft.h"

void	printer(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current_a;
	t_stack	*current_b;

	ft_printf("Stack A: ");
	current_a = *stack_a;
	while (current_a != NULL)
	{
		ft_printf("%d ", current_a->data);
		current_a = current_a->next;
	}
	ft_printf("\n");
	ft_printf("Stack B: ");
	current_b = *stack_b;
	while (current_b != NULL)
	{
		ft_printf("%d ", current_b->data);
		current_b = current_b->next;
	}
	ft_printf("\n");
}

void	ft_free(t_stack **stack)
{
	t_stack	*aux;

	while (*stack)
	{
		aux = *stack;
		*stack = (*stack)->next;
		free(aux);
	}
	stack = NULL;
}

t_stack	*index_init(t_stack *stack_a)
{
	t_stack	*temp;

	temp = stack_a;
	while (temp != NULL)
	{
		temp->idx = -1;
		temp = temp->next;
	}
	temp = stack_a;
	return (temp);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc == 1 || argv[1][0] == '\0')
		return (1);
	stack_init(&a, argv + 1);
	a = index_init(a);
	a = stack_index(a, argc - 1);
	if (stack_sorted(a) == 1)
		ft_free(&a);
	if (stack_sorted(a) != 1)
	{
		if (argc == 3)
			tiny_sort_two(a);
		if (argc == 4)
			tiny_sort_three(a);
		if (argc == 5)
			tiny_sort_four(a, b);
		if (argc == 6)
			tiny_sort_five(a, b);
		if (argc > 6)
			radix(a, b);
	}
	return (0);
}
