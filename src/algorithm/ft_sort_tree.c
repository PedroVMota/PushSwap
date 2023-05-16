/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:52:19 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 20:33:39 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tree(t_list **head)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)(*head)->content;
	second = *(int *)(*head)->next->content;
	third = *(int *)(*head)->next->next->content;
	if (first > second && second < third && first < third)
		ft_sa();
	else if (first > second && second > third && first > third)
	{
		ft_sa();
		ft_rra();
	}
	else if (first > second && second < third && first > third)
		ft_ra();
	else if (first < second && second > third && first < third)
	{
		ft_sa();
		ft_ra();
	}
	else if (first < second && second > third && first > third)
		ft_rra();
}
