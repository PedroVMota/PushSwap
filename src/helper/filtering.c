/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:53:48 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/15 15:45:24 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_list *example)
{
	int	prev_val;
	int	cur_val;

	if (example == NULL)
		return (-1);
	prev_val = ((int *)example->content)[0];
	example = example->next;
	while (example != NULL)
	{
		cur_val = ((int *)example->content)[0];
		if (cur_val < prev_val)
			return (0);
		prev_val = cur_val;
		example = example->next;
	}
	return (1);
}

int	ft_getmax(t_list *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = *(int *)stack->content;
	while (stack)
	{
		if (i < *(int *)stack->content)
			i = *(int *)stack->content;
		stack = stack->next;
	}
	return (i);
}

int	ft_getmin(t_list *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = *(int *)stack->content;
	while (stack)
	{
		if (i > *(int *)stack->content)
			i = *(int *)stack->content;
		stack = stack->next;
	}
	return (i);
}

int	ft_avg(t_list *tab, int lenth)
{
	int	sum;

	sum = 0;
	while (tab)
	{
		sum += *(int *)tab->content;
		tab = tab->next;
	}
	return (sum / lenth);
}
