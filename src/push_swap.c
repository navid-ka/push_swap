/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:10 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/13 19:52:14 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft/include/libft.h"

void printer(t_stack **stack_a)
{
	printf("Stack A: ");
	t_stack *current = *stack_a;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
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
	printer(&a);
	return (0);
}
