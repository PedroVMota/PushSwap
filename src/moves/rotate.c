/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:50:31 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 12:00:14 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_rotate(t_list **head)
{
	t_list	*first;

	first = *head;
	if (!head || !*head || !(*head)->next)
		return ;
	if ((*head)->next->next)
		first->next = (*head)->next->next;
	else
		first->next = NULL;
	(*head) = (*head)->next;
	(*head)->next = first;
}

void	ft_ra(void)
{
	ft_rotate(&stack_a()->head);
	printf("ra\n");
}

void	ft_rb(void)
{
	ft_rotate(&stack_a()->head);
	printf("ra\n");
}

void	ft_rr(void)
{
	ft_rotate(&stack_a()->head);
	ft_rotate(&stack_b()->head);
	printf("rr\n");
}