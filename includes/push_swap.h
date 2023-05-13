/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:02:56 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/13 09:56:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define THERE printf("There\n");
# define HERE printf("Here\n");
# define HERE printf("Here\n");
# define ERROR printf("Error\n"); return 1;


// STACK LIST STRUCTURE
typedef struct s_stack
{
	t_list *head;
	int size;
} t_stack;

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Stack Manegment!
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_


t_stack	*stack_a(void);
t_stack	*stack_b(void);

void ft_build_stack(char **arguments);



#endif