/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   information.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:28:12 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/18 18:33:16 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_updater(void)
{
	stack_a()->size = ft_lstsize(stack_a()->head);
}

void	initialize_buddy_data(t_stack *cost_buddy, t_list **stack_a,
		t_list **stack_b)
{
	cost_buddy->head = *stack_b;
	cost_buddy->best = INT_MAX;
	cost_buddy->index_nb = 0;
	cost_buddy->size_b = ft_lstsize(*stack_b);
	cost_buddy->size_a = ft_lstsize(*stack_a);
}

void	error_section(void *number)
{
	if (number)
		free(number);
	ft_lstclear(&stack_a()->head, free);
	ft_lstclear(&stack_b()->head, free);
	write(1, "Error\n", 6);
}