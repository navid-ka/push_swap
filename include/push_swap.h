/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:17:57 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/18 18:05:58 by nkeyani-         ###   ########.fr       */
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
void			rra(t_stack **stack_a);
void			swap(int *a, int *b);
void			error_exit(void);
int				error_syntax(char *str_nbr);
int				ft_strcmp(const char *s1, const char *s2);
void			lstadd_front(t_stack **lst, t_stack *new);
int				lstsize(t_stack *lst);
t_stack			*lstnew(int nbr);
t_stack			*lstadd_back(t_stack **lst, t_stack *new);
t_stack			*lstlast(t_stack *lst);
void			radix(t_stack *stack_a, t_stack *stack_b);
t_stack			*stack_index(t_stack *stack_a, int count);
t_stack			*index_init(t_stack *stack_a);
void			stack_init(t_stack **a, char **argv);
int				stack_sorted(t_stack *stack);
void			tiny_sort_three(t_stack *a);
void			tiny_sort_four(t_stack *a, t_stack *b);
void			tiny_sort_five(t_stack *a, t_stack *b);
void			lstdelone(t_stack *lst, void (*del)(void *));
void			lstclear(t_stack **lst, void (*del)(void *));
void			ft_free(t_stack **stack);
void 			printer(t_stack **stack_a, t_stack **stack_b);

#endif