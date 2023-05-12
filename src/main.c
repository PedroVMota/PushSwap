/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:47:00 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/12 17:55:24 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_clearsplit(char **av)
{
	int i  = 0;
	
	while(stack_a()->av[i])
	{
		free(av[i]);
		i++;
	}
	free(stack_a()->av);
}

void	stack_init(void)
{
	int	i;

	i = 0;
	while (stack_a()->av[i])
	{
		ft_lstadd_back(&stack_a()->head, ft_lstnew(ft_atoi(stack_a()->av[i])));
		i++;
	}
	ft_clearsplit(stack_a()->av);
}

int	main(int ac, char **av)
{
    int i = 0;
	if (ac == 1)
		ERROR;
	else
	{
		while(i < ac - 1 )
        {

            i++;
        }
		stack_init();
	}
}