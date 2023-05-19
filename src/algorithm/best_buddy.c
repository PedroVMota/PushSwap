/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_buddy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:56:33 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/19 15:50:58 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_make_the_moves(t_stack *budd, t_list **main, t_list **secondary)
{
	ft_put_top_a(main, budd->final_best_friend);
	ft_put_top_b(secondary, budd->final_number);
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
		buddy.best_friend_stack_index = ft_get_best_buddy(main,
				*(int *)(*secondary)->content);
		buddy.cost_of_best_friend = ft_calculate_cost_up(buddy.size_a,
				buddy.best_friend_stack_index);
		buddy.cost_of_number = ft_calculate_cost_up(buddy.size_b,
				buddy.index_number);
		if ((buddy.cost_of_best_friend + buddy.cost_of_number) < buddy.best
			&& (buddy.cost_of_best_friend + buddy.cost_of_number) >= 0)
		{
			buddy.final_number = buddy.index_number;
			buddy.final_best_friend = buddy.best_friend_stack_index;
			buddy.best = buddy.cost_of_number + buddy.cost_of_best_friend;
		}
		(*secondary) = (*secondary)->next;
		buddy.index_number++;
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
