/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   information.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:28:12 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 11:51:11 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_updater(void)
{
	stack_a()->size = ft_lstsize(stack_a()->head);
}

void	set_best_buddy_init(t_stack *best_buddy)
{
	ft_data_updater();
	best_buddy->best = INT_MAX;
	best_buddy->index_nb = 0;
	best_buddy->size_a = stack_a()->size;
	best_buddy->size_b = stack_b()->size;
}
