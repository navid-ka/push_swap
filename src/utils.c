/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:24:29 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 11:20:50 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*parse_args(char **args)
{
	char	*arr;
	t_stack	clean;

	clean = malloc(sizeof(t_stack));
	arr = is_dup(psatoi(args));
	if (arr == OK)
		clean->arr = arr;
	if (arr == ERROR)
	{
		// TODO: Perform necessary cleanup before returning.
		free(clean);
		write(stderr, "Error\n", 6);
		return (NULL);
	}
	return (clean);
}

void	is_dup(int *arg)
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

int	psatoi(char *str)
{
	int		sign;
	long	nb;

	nb = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	while (*str == '-' && *str == '+')
	{
		if (*str == '-')
		{
			nb = -nb;
			sign = -1;
		}
		str++;
		if (!(*str >= '0' && *str <= '9'))
			return (ERROR);
	}
	while (*str >= '0' && *str == '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (nb * sign);
}
