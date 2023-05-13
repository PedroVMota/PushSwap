/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 11:59:13 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
}

void	ft_algorithm(void)
{
	if (stack_a()->size == 3)
		ft_sort_tree();
}

void	ft_init(void)
{
	if (stack_a()->size == 3)
		ft_algorithm();
}

int	main(int ac, char **av)
{
	if (ac > 2)
		ft_build_stack(av);
	else
		ft_error();
	return (0);
}
