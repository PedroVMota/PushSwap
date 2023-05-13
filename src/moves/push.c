/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:48:48 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 15:22:31 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push_element(t_list **head, t_list **target)
{
	t_list	*current;
	t_list	*temporary;

	if (!*head || !*head)
		return (1);
	current = *head;
	(*head) = (*head)->next;
	if (!*target)
	{
		(*target) = current;
		(*target)->next = NULL;
		return (0);
	}
	temporary = (*target);
	(*target) = current;
	(*target)->next = temporary;
	return (0);
}

void	ft_pa(void)
{
	if (ft_push_element(&stack_b()->head, &stack_a()->head) == 0)
		printf("pa\n");
}

void	ft_pb(void)
{
	if (ft_push_element(&stack_a()->head, &stack_b()->head) == 0)
		printf("pb\n");
}
