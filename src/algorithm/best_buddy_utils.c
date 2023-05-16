/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_buddy_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:53:13 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 19:56:08 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function returns the Average value of the stack
int	dynamic_average_list(t_list *stack)
{
	long long	sum;
	int			size;

	sum = 0;
	size = ft_lstsize(stack);
	while (stack)
	{
		sum += *(int *)stack->content;
		stack = stack->next;
	}
	return (sum / size);
}

//This friend return the the raw value of is best_friends
int	ft_get_best_buddy(t_list **main, int current_number_in_b)
{
	long int	best_buddy;
	long int	counter;
	long int	tmp;
	t_list		*temp;

	counter = INT_MAX;
	best_buddy = INT_MAX;
	temp = *main;
	while (*main)
	{
		tmp = *(int *)(*main)->content - current_number_in_b;
		if ((tmp < counter) && (*(int *)(*main)->content > current_number_in_b))
		{
			counter = tmp;
			best_buddy = *(int *)(*main)->content;
		}
		(*main) = (*main)->next;
	}
	*main = temp;
	if (best_buddy == INT_MAX)
		return (-1);
	return (ft_get_index(best_buddy, *main));
}

//This function calculares the cost to put the value on the top
int	ft_calculate_cost_up(int size, int index)
{
	int	counter;

	counter = 0;
	if (index <= (size / 2))
	{
		counter = index;
	}
	else if (index > (size / 2))
		counter = size - index;
	return (counter);
}
