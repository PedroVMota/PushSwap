/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:41:10 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/19 13:10:44 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_wierd(char *s)
{
	unsigned int	i;

	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (ft_isdigit(s[i]))
		i++;
	if (s[i] == 0 && i > 0)
		return (false);
	return (true);
}

bool	ft_has_duplicate(t_list *stack, int num)
{
	ft_data_updater();
	if (!stack)
		return (0);
	if (ft_lstsize(stack) <= 0)
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
	int		i;
	long	*tmp;

	i = 0;
	while (arguments[i])
	{
		if (ft_wierd(arguments[i]) == true)
		{
			error_section(NULL);
			exit(0);
		}
		tmp = (long *)malloc(sizeof(long));
		*tmp = ft_atoi(arguments[i]);
		if (!tmp || *tmp < INT_MIN || *tmp > INT_MAX)
		{
			error_section(NULL);
			exit(0);
		}
		if (ft_has_duplicate(stack_a()->head, *tmp))
		{
			error_section(NULL);
			exit(0);
		}
		ft_lstadd_back(&stack_a()->head, ft_lstnew(tmp));
		i++;
	}
}
