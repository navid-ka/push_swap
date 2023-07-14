/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:10 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/14 18:57:10 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft/include/libft.h"

void printer(t_stack **stack_a, t_stack **stack_b)
{
	printf("Stack A: ");
	t_stack *current_a = *stack_a;
	while (current_a != NULL)
	{
		printf("%d ", current_a->data);
		current_a = current_a->next;
	}
	printf("\n");
	printf("Stack B: ");
	t_stack *current_b = *stack_b;
	while (current_b != NULL)
	{
		printf("%d ", current_b->data);
		current_b = current_b->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv == NULL)
			error_exit();
	}
	stack_init(&a, argv + 1);
	if (!stack_sorted(a))
		error_exit();
	printer(&a, &b);
	sa(a);
	printer(&a, &b);
	pb(&a, &b);
	printer(&a, &b);
	sa(a);
	printer(&a, &b);
	pa(&a, &b);
	printer(&a, &b);
	return (0);
}
