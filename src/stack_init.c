/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/18 16:54:54 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_sorted(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->data < temp->next->data)
		{
			temp = temp->next;
		}
		else
			return (0);
	}
	return (1);
}

int	is_dup(t_stack *a, int nbr)
{
	if (NULL == a)
		return (0);
	while (a)
	{
		if (a->data == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

void	stack_init(t_stack **a, char **argv)
{
	long long	nbr;
	int			i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			error_exit();
		nbr = psatoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_exit();
		if (is_dup(*a, nbr))
			error_exit();
		if (!lstadd_back(a, lstnew(nbr)))
			error_exit();
		++i;
	}
}
