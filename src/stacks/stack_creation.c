/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:41:10 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/17 17:24:08 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	ft_isnumeric(const char *str)
{
	if (!str || *str == '\0')
		return (false);
	if (*str == '-')
		str++;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	return (true);
}

bool	ft_has_duplicate(t_list *stack, int num)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (*(int *)stack->content == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	ft_build_stack(char **arguments)
{
	int i;
	int *tmp;

	i = 0;
	tmp = NULL;

	while (arguments[i])
	{
		tmp = (int *)malloc(sizeof(int));
		if (!tmp)
			return ;
		*tmp = ft_atoi(arguments[i]);
		if (*tmp < INT_MIN || *tmp > INT_MAX)
		{
			error_section();
			free(tmp);
			return ;
		}
		if (!ft_has_duplicate(stack_a()->head, *tmp))
			ft_lstadd_back(&stack_a()->head, ft_lstnew(tmp));
		else
		{
			error_section();
			free(tmp);
			return ;
		}
	}
}