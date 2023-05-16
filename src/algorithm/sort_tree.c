/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:49:40 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 10:05:35 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_manager_tree(t_list **head)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)(*head)->content;
	b = *(int *)(*head)->next->content;
	c = *(int *)(*head)->next->next->content;
	if (a > b && a < c && !ft_sorted(*head))
		ft_sa();
	if (a > b && b > c && !ft_sorted(*head))
		ft_sa();
	if (a < b && b > c && !ft_sorted(*head))
		ft_rra();
	if (a > b && b < c && !ft_sorted(*head))
		ft_ra();
	if (a < b && b > c && !ft_sorted(*head))
		ft_sa();
}
