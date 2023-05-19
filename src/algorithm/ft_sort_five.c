/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:32:47 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/19 15:13:55 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_list **lst)
{
	int	index_min;

	index_min = ft_get_index(ft_min(*lst), *lst);
	ft_put_top_a(lst, index_min);
	ft_pb();
	index_min = ft_get_index(ft_min(*lst), *lst);
	ft_put_top_a(lst, index_min);
	ft_pb();
	if (!ft_is_sorted(stack_a()->head))
		ft_sa();
	if (ft_is_sorted(stack_b()->head))
		ft_sb();
	ft_pa();
	ft_pa();
}

void	ft_sort_five(t_list **lst, int witch)
{
	int	index_min;

	index_min = ft_get_index(ft_min(*lst), *lst);
	if (witch == 1)
		ft_put_top_a(lst, index_min);
	ft_pb();
	index_min = ft_get_index(ft_min(*lst), *lst);
	if (witch == 1)
		ft_put_top_a(lst, index_min);
	ft_pb();
	if (ft_is_sorted(stack_b()->head))
		ft_sb();
	ft_sort_tree(lst);
	ft_pa();
	ft_pa();
}
