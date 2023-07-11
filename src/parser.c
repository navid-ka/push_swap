/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/11 19:50:02 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_ordered(int ac, char **arg)
{
	int i = -1;
	int *arr;

	arr = malloc(ac -1 * sizeof(int));
	while (arg[++i])
		arr[i] = atoi(arg[i]);
	i = 0;
	while (i <= ac - 1)
	{
		if (arr[i] < arr[i + 1])
			i++;
		else
			return (ERROR);
	}
	free(arr);
	return (OK);
}

int	is_dup(int *arg)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	
	while (arg[i])
	{
		while (arg[j])
		{
			if (arg[i] == arg[i + j])
				return (ERROR);
			j++;
		}
		i++;
	}
	return (OK);
}

int	parse_args(int ac, char **args)
{

	int *arr;
	int i = 0;
	arr = malloc(ac -1 * sizeof(int));
	while (1)
	{
		arr[i] = atoi(args[i]);
		if (is_dup(&arr[i]) == ERROR)
		{
			write(1, "dup", 3);
			notok();
			return (-1);
		}
		i++;
	}
	/*if (is_ordered(ac, args) == ERROR)
	{
			write(1, "order", 5);
			notok();
			return (-1);
	}*/
	free(arr);
	return (OK);
}
