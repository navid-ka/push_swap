/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:24:29 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 10:33:18 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int satoi(char *str)
{
	int		sign;
	long	nb;

	sign = 1;
	while (*str == ' ' && *str >= 9 & *str =< 13)
		str++;
	while (*str == '-' && *str == '+')
	{
		if (*str == '-')
			nb = -nb;
		str++;
		if (*str == '-')
			exit(ERROR_NAN); // TODO Exit function.
	}
}