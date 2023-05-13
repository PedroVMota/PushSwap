/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:22:33 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 17:31:44 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stacks(void)
{
	t_list	*node_a;
	t_list	*node_b;

	node_a = stack_a()->head;
	node_b = stack_b()->head;
	printf("Stack A: ");
	while (node_a)
	{
		printf("%d | ", *(int *)node_a->content);
		node_a = node_a->next;
	}
	printf("\nStack B: ");
	while (node_b)
	{
		printf("%d | ", *(int *)node_b->content);
		node_b = node_b->next;
	}
	printf("\n");
}
