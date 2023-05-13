/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:50:31 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 14:48:28 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Top goest to bottom, anti clock wise*/
static void	ft_reverse_rotate(t_list **head)
{
	t_list	*current;
	t_list	*penultimo;
	t_list	*last;

	current = *head;
	last = ft_lstlast(*head);
	penultimo = *head;
	if (last == current)
		return ;
	while (penultimo->next != last)
		penultimo = penultimo->next;
	*head = last;
	last->next = current;
	penultimo->next = NULL;
}

void	ft_rra(void)
{
	ft_reverse_rotate(&stack_a()->head);
	printf("rra\n");
}

void	ft_rrb(void)
{
	ft_reverse_rotate(&stack_a()->head);
	printf("rra\n");
}

void	ft_rrr(void)
{
	ft_reverse_rotate(&stack_a()->head);
	ft_reverse_rotate(&stack_b()->head);
	printf("rrr\n");
}
