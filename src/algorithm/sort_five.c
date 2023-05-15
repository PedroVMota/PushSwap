/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:49:40 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/15 15:55:48 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_lowest_index(t_list *tab)
{
	t_list		*current;
	int			min_index;
	long long	min_value;
	int			i;

	current = tab;
	min_index = 0;
	min_value = *(int *)tab->content;
	i = 0;
	while (current != NULL)
	{
		if (*(int *)current->content < min_value)
		{
			min_value = *(int *)current->content;
			min_index = i;
		}
		current = current->next;
		i++;
	}
	return (min_index);
}

void	send_lownumbers(void)
{
	int	index;

	index = 0;
	index = ft_lowest_index(stack_a()->head);
	if (index == 1)
		ft_ra();
	if (index == 2)
	{
		ft_ra();
		ft_ra();
	}
	if (index == 3)
	{
		ft_rra();
		ft_rra();
	}
	if (index == 4)
		ft_rra();
	ft_pb();
}

void	ft_stack_manager_five(void)
{
	int	first;
	int	second;

	send_lownumbers();
	send_lownumbers();
	first = *(int *)stack_b()->head->content;
	second = *(int *)stack_b()->head->next->content;
	ft_stack_manager_tree(&stack_a()->head);
	if (first < second)
		ft_sb();
	ft_pa();
	ft_pa();
}
