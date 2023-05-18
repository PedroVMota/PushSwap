/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leaks_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:20:27 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/18 17:54:22 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
This Function should Delete every single heap allocation inside the
stack a and b
*/
void	ft_leaks_manager(void)
{
	ft_lstclear(&stack_a()->head, free);
	ft_lstclear(&stack_b()->head, free);
}

void	split_clear(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
