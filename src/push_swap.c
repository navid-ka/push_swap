/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:10 by bifrost           #+#    #+#             */
/*   Updated: 2023/07/08 10:23:17 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void printArrays(t_stack *stack_a, t_stack *stack_b)
{
    printf("Stack A: ");
    for (int i = 0; i < stack_a->len; i++)
    {
        printf("%d ", stack_a->arr[i]);
    }
    printf("\n");

    printf("Stack B: ");
    for (int i = 0; i < stack_b->len; i++)
    {
        printf("%d ", stack_b->arr[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    t_stack stack_a;
    t_stack stack_b;
    int arr[] = {5, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    stack_a.arr = arr;
    stack_a.len = size;
    stack_b.arr = malloc(size * sizeof(int));
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
    free(stack_b.arr);

    return 0;
}