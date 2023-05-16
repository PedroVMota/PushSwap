/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   information.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:28:12 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 10:09:45 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_updater(void)
{
	stack_a()->size = ft_lstsize(stack_a()->head);
}
void set_best_buddy_init(t_stack *best_buddy, t_list **stack_a, t_list **stack_b)
{
	best_buddy->best = INT_MAX;
	best_buddy->index_nb = 0;
	best_buddy->size_a = ft_lstsize(*stack_a);
	best_buddy->size_b = ft_lstsize(*stack_b);
}


