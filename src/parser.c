/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:55:28 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 14:34:11 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
//int	is_ordered(char *arg);

int	is_num(char **arg)
{
	if (arg[0] == '\0')
		return (ERROR);
	i = 0;
	if ((arg[0] == '-' || arg[0] == '+') && arg[1])
		i = 1;
	while (arg[i] && (arg[i] > '0' && arg[i] < '9'))
		i++;
	if (arg[i] && (arg[i] < '0' || arg[i] > '9'))
		return (ERROR);
	return (OK);
}

int	is_dup(char **arg)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (arg[i])
	{
		if (arg[i] == arg[j])
		{
			j++;
			return (ERROR);
		}
		i++;
	}
	return (OK);
}

int	parse_args(char **args)
{
	if (is_dup(args) == ERROR)
		notok();
	if (is_num(args) == ERROR)
		notok();
	//if (is_ordered(args) == ERROR)
		//notok();
	return (OK);
}
*/