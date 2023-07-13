/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/13 17:33:03 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	stack_sorted(t_stack *stack)
{
	if (NULL == stack)
		return (1);
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static bool	is_dup(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

static void	create_init(t_stack **a, int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		error_exit();
	node->data = (int)nbr;
	node->next = NULL;
	if (*a == NULL)
		*a = node;
	else
	{
		node->next = *a;
		*a = node;
	}
}

void	stack_init(t_stack **a, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		nbr = psatoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_exit();
		else if (is_dup(argv) == false)
			error_exit();
		create_init(a, nbr);
		i++;
	}
}
