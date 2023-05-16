/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 10:09:29 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	**best_friends_get_data(t_list *a, t_list *b)
{
}

void	best_friends_sorting(void)
{
	t_stack buddy;
	
	set_best_buddy_init(&buddy, &stack_a()->head, &stack_b()->head);
	
}

void	ft_average_algorithm(void)
{
	int	avg;

	while (stack_a()->size > 3)
	{
		avg = ft_avg(stack_a()->head, ft_lstsize(stack_a()->head));
		if (*(int *)stack_a()->head->content < avg)
		{
			ft_pb();
			if (*(int *)stack_b()->head->content < ft_avg(stack_b()->head,
															ft_lstsize(stack_b()->head)))
				ft_rb();
		}
		else
			ft_ra();
		ft_data_updater();
	}
	ft_data_updater();
}

void	ft_init(void)
{
	ft_data_updater();
	if (stack_a()->size == 2)
	{
		if (!ft_sorted(stack_a()->head))
			ft_sa();
	}
	else if (stack_a()->size == 3)
		ft_stack_manager_tree(&stack_a()->head);
	else if (stack_a()->size == 5)
		ft_stack_manager_five();
	else if (stack_a()->size >= 6)
		ft_average_algorithm();
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_build_stack(av);
		ft_init();
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
