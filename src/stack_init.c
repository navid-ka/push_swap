/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/13 14:00:56 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//static int	is_dup(t_stack **a, int nbr);

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
		//if (is_dup(*a, (int)nbr))
			//error_exit();
		t_stack *node = malloc(sizeof(t_stack));
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
		i++;
	}
}
