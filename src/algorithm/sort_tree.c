/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:49:40 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 20:29:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_stack_manager_tree(t_list **head)
{
	long long	a;
	long long	b;
	long long	c;

	a = *(int *)(*head)->content;
	b = *(int *)(*head)->next->content;
	c = *(int *)(*head)->next->next->content;
	if (a > b && a < c)
		ft_sa();
	else if (a > b && b > c)
		ft_sa();
	else if (a < b && b > c)
		ft_rra();
	else if (a > b && b < c)
		ft_ra();
	else if (a < b && b > c)
		ft_sa();
}
