/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:17:57 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/13 19:03:17 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include "libft/include/libft.h"

typedef struct s_stack
{
	int				data;
	int				len;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

enum
{
	OK,
	ERROR,
};

/*void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	swap(int *a, int *b);*/
int		psatoi(char *str);
void	error_exit(void);
void	stack_init(t_stack **a, char **argv);
void	*lstnew(t_stack **a, int data);
t_stack	*lstlast(t_stack *lst);
void	lstadd_back(t_stack **lst, t_stack *new);
bool	stack_sorted(t_stack *stack);
int		ft_strcmp(const char *s1, const char *s2);
void 	printer(t_stack **stack_a); //Remove

#endif