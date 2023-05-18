/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/18 18:33:21 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function will return 1 if sorted
int	ft_is_sorted(t_list *list)
{
	if (!list)
		return (1);
	while (list->next)
	{
		if (*(int *)list->next->content < *(int *)list->content)
			return (0);
		list = list->next;
	}
	return (1);
}

//	This function will handle the number and will choose whitch
//	algorithm to use
void	ft_init(void)
{
	ft_data_updater();
	if (ft_is_sorted(stack_a()->head))
		return ;
	if (stack_a()->size == 2)
	{
		if (!ft_is_sorted(stack_a()->head))
			ft_sa();
	}
	if (stack_a()->size == 4)
		ft_sort_four(&stack_a()->head);
	else if (stack_a()->size == 3)
		ft_sort_tree(&stack_a()->head);
	else if (stack_a()->size == 5)
		ft_sort_five(&stack_a()->head, 1);
	else if (stack_a()->size >= 6)
		ft_cost_algorithm();
	ft_leaks_manager();
}

// This is main, i don't think i do need to explain what does
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_build_stack(&av[1]);
		ft_init();
	}
	else
		write(1, "\n", 1);
	return (0);
}
