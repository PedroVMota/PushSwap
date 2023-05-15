/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/15 15:54:20 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*

Divide the input list into two stacks, stack_a and stack_b.

Find the maximum number in the input list and determine the number of digits in that number. This will give you the number of passes you need to perform in the radix sort algorithm.

For each pass, perform the following steps:
a. Create 10 buckets, one for each possible digit (0-9).

b. Iterate through stack_a and place each number into the appropriate bucket based on the current digit being sorted.

c. After all numbers have been placed into buckets,
	each bucket into stack_b in the order 0-9.

d. Repeat steps b and c for each digit, least significant to most significant.

Once all passes are complete, stack_a will be sorted in ascending order.

*/

void	ft_average_algorithm(void)
{
	int	avg;

	while (ft_lstsize(stack_a()->head) > 5)
	{
		avg = ft_avg(stack_a()->head, ft_lstsize(stack_a()->head));
		if (*(int *)stack_a()->head->content < avg)
		{
			ft_pb();
			if (*(int *)stack_b()->head->content < ft_avg(stack_b()->head, ft_lstsize(stack_b()->head)))
				ft_rb();
		}
		else
			ft_ra();
	}
	ft_stack_manager_five();
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
