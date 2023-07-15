/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:17:57 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/15 02:59:31 by bifrost          ###   ########.fr       */
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
	int				idx;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

enum
{
	OK,
	ERROR,
};

long long		psatoi(char *str);
void			sa(t_stack *stack_a);
void			sb(t_stack *stack_b);
void			ss(t_stack *stack_a, t_stack *stack_b);
void			pa(t_stack **stack_a, t_stack **stack_b);
void			pb(t_stack **stack_a, t_stack **stack_b);
void			ra(t_stack **stack_a);
void			swap(int *a, int *b);
void			error_exit(void);
void			stack_init(t_stack **a, char **argv);
int				stack_sorted(t_stack *stack);
int				ft_strcmp(const char *s1, const char *s2);
void			lstadd_front(t_stack **lst, t_stack *new);
t_stack			*radix(t_stack *stack_a, t_stack *stack_b);
t_stack			*ft_index(t_stack *stack_a, int count);
t_stack			*index_init(t_stack *stack_a);
int				lstsize(t_stack *lst);
void 			printer(t_stack **stack_a, t_stack **stack_b); //Remove

#endif