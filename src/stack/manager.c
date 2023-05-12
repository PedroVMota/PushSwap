/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:40:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/12 15:45:47 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	a;

	return (&a);
}

t_stack	*stack_b(void)
{
	static t_stack b;

	return (&b);
}