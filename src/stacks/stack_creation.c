/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:41:10 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 11:41:44 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_build_stack(char **arguments)
{
	int	i;
	int	*tmp;

	i = 1;
	tmp = 0;
	while (arguments[i])
	{
		if (arguments[i][0])
		{
			tmp = (int *)malloc(sizeof(int));
			if (!tmp)
				return ;
			*tmp = ft_atoi(arguments[i]);
			ft_lstadd_back(&stack_a()->head, ft_lstnew(tmp));
		}
		i++;
	}
	stack_a()->size = ft_lstsize(stack_a()->head);
	stack_b()->size = ft_lstsize(stack_b()->head);
	ft_init();
	ft_leaks_manager();
	print_stacks();
}
