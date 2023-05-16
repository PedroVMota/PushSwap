/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_buddy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:56:33 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 20:32:32 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_make_the_moves(t_stack *budd, t_list **main, t_list **secondary)
{
	ft_put_top_a(main, budd->final_bf);
	ft_put_top_b(secondary, budd->final_nb);
	ft_pa();
}

void	ft_rotate_until_last_is_last(t_list **stack_a)
{
	int	max;
	int	index;
	int	nb_rotations;

	max = ft_max(*stack_a);
	index = ft_get_index(max, *stack_a) + 1;
	nb_rotations = ft_lstsize(*stack_a) - index;
	if (index < nb_rotations)
	{
		while (index--)
			ft_ra();
	}
	else
	{
		while (nb_rotations--)
			ft_rra();
	}
}

void	best_buddy_sort(t_list **main, t_list **secondary)
{
	t_stack	buddy;

	initialize_buddy_data(&buddy, main, secondary);
	while (*secondary)
	{
		buddy.index_bf = ft_get_best_buddy(main, *(int *)(*secondary)->content);
		buddy.cost_bf = ft_calculate_cost_up(buddy.size_a, buddy.index_bf);
		buddy.cost_nb = ft_calculate_cost_up(buddy.size_b, buddy.index_nb);
		if ((buddy.cost_bf + buddy.cost_nb) < buddy.best && (buddy.cost_bf
				+ buddy.cost_nb) >= 0)
		{
			buddy.final_nb = buddy.index_nb;
			buddy.final_bf = buddy.index_bf;
			buddy.best = buddy.cost_nb + buddy.cost_bf;
		}
		(*secondary) = (*secondary)->next;
		buddy.index_nb++;
	}
	*secondary = buddy.head;
	ft_make_the_moves(&buddy, main, secondary);
}

void	ft_cost_algorithm(void)
{
	int	average;
	int	cur;

	average = dynamic_average_list(stack_a()->head);
	while (ft_lstsize(stack_a()->head) > 5)
	{
		if (*(int *)stack_a()->head->content > average)
			ft_ra();
		else
		{
			ft_pb();
			cur = *(int *)stack_b()->head->content;
			if (cur < dynamic_average_list(stack_b()->head))
				ft_rb();
			average = dynamic_average_list(stack_a()->head);
			ft_data_updater();
		}
	}
	ft_sort_five(&stack_a()->head, 1);
	while (ft_lstsize(stack_b()->head))
		best_buddy_sort(&stack_a()->head, &stack_b()->head);
	ft_rotate_until_last_is_last(&stack_a()->head);
}
