/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   information.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:28:12 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 18:30:57 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_updater(void)
{
	stack_a()->size = ft_lstsize(stack_a()->head);
	stack_a()->min = ft_getmin(stack_a()->head);
	stack_a()->max = ft_getmax(stack_a()->head);
	stack_b()->size = ft_lstsize(stack_b()->head);
	stack_b()->min = ft_getmin(stack_b()->head);
	stack_b()->max = ft_getmax(stack_b()->head);
}
