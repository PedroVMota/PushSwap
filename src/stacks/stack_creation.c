/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:41:10 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/18 15:18:32 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_is_all_number(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (!ft_isdigit(s[i]))
			break;
	if(s[i] == '\0')
		return 0;
	return (1);
}

int	ft_limitations(long int number)
{
	if (number >= INT_MIN && number <= INT_MAX)
		return (0);
	return (1);
}

bool	ft_has_duplicate(t_list *stack, int num)
{
	if (!stack)
		return (0);
	ft_data_updater();
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
	int i;
	long *tmp;

	i = 0;
	tmp = NULL;

	while (arguments[i])
	{
		if (ft_is_all_number(arguments[i]))
		{
			error_section();
			exit(1);
		}
		tmp = (long *)malloc(sizeof(long));
		if (!tmp)
			return ;
		*tmp = ft_atoi(arguments[i]);
		if (ft_has_duplicate(stack_a()->head, *(int *)tmp)
			|| ft_limitations(*tmp))
		{
			error_section();
			exit(1);
		}
		ft_lstadd_back(&stack_a()->head, ft_lstnew(tmp));
		i++;
	}
}