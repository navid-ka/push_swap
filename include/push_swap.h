/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:17:57 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/13 13:49:57 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				data;
	int				len;
	struct s_stack	*next;
}	t_stack;

enum
{
	OK,
	ERROR,
};

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	swap(int *a, int *b);
int		psatoi(char *str);
void	error_exit(void);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	stack_init(t_stack **a, char **argv);
void	*lstnew(t_stack **a, int data);
t_stack	*lstlast(t_stack *lst);
void	lstadd_back(t_stack **lst, t_stack *new);

#endif