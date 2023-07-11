/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:10 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/11 19:32:32 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void printArrays(t_stack *stack_a, t_stack *stack_b)
{
    printf("Stack A: ");
    for (int i = 0; i < stack_a->len; i++)
    {
        printf("%d ", stack_a->data[i]);
    }
    printf("\n");
    printf("Stack B: ");
    for (int i = 0; i < stack_b->len; i++)
    {
        printf("%d ", stack_b->data[i]);
    }
    printf("\n");
}

t_stack *clean_args(char **args, int argc)
{
   // if (parse_args(argc, args) == OK)
        //printf("OK");
    t_stack *clean = malloc(sizeof(t_stack));
    int *arr = malloc((argc - 1) * sizeof(int));
    for (int i = 1; i < argc; i++)
    {
        arr[i - 1] = psatoi(args[i]);
    }
    clean->data = arr;
    clean->len = argc - 1;
    return clean;
}

int main(int argc, char **argv)
{
    t_stack stack_a;
    t_stack stack_b;
    t_stack *arr = clean_args(argv, argc);
    
    stack_a.data = arr->data;
    stack_a.len = arr->len;
    stack_b.data = malloc(arr->len * sizeof(int));
    stack_b.len = 0;
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    sb(&stack_b);
    printArrays(&stack_a, &stack_b);
    sb(&stack_b);
    printArrays(&stack_a, &stack_b);
    pa(&stack_a, &stack_b);
    printArrays(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    printArrays(&stack_a, &stack_b);
    free(stack_b.data);
    free(arr->data);
    free(arr);
    return 0;
}