/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:02:56 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/12 17:55:37 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>

# define THERE write(1, "THERE\n", 6)
# define ERROR write(1, "Error\n", 6)
# define HERE write(1, "HERE\n", 6)
# define OVERHERE write(1, "OVETHERE\n", 9)

typedef struct s_stack
{
	t_list	*head;
	char	**av;
	int		len;
	int		avg;
	int		max;
	int		min;
}			t_stack;


//Inicialize the Stack

t_stack *stack_a(void);
t_stack *stack_b(void);
#endif