/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:24:29 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 12:22:20 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	notok(void)
{
	write(STDERR_FILENO, "Error\n", 6);
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
	while (*str == '-' || *str == '+')
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
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * sign);
}
