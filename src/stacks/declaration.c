/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declaration.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:37:52 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/13 18:38:09 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	main;

	return (&main);
}

t_stack	*stack_b(void)
{
	static t_stack	main;

	return (&main);
}
