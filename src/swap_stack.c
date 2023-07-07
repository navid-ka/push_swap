/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:15:22 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/07 01:17:53 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(int *sa)
{
	int	middleman;

	middleman = sa[0];
	sa[0] = sa[1];
	sa[1] = middleman;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	middleman;

	middleman = sb[0];
	sb[0] = sb[1];
	sb[1] = middleman;
	write(1, "sb\n", 3);
}

void	ss(int *sa, int *sb)
{
	int	middleman;

	middleman = sa[0];
	sa[0] = sa[1];
	sa[1] = middleman;
	middleman = sb[0];
	sb[0] = sb[1];
	sb[1] = middleman;
	write(1, "ss\n", 3);
}
