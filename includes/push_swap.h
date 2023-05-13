/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:02:56 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/13 17:29:21 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>

// STACK LIST STRUCTURE
typedef struct s_stack
{
	t_list	*head;
	int		size;
	int		max;
	int		min;

}			t_stack;

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Stack Manegment!
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
t_stack		*stack_a(void);
t_stack		*stack_b(void);
void		ft_build_stack(char **arguments);
void		ft_leaks_manager(void);
void		ft_data_updater(void);

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Algorithm Functions
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_

//Sort number in stack a
void		ft_stack_manager_tree(t_list **head);
void		ft_stack_manager_five(void);
//		Moviments
void		ft_ra(void);
void		ft_rb(void);
void		ft_rr(void);
void		ft_rra(void);
void		ft_rrb(void);
void		ft_rrr(void);
void		ft_pa(void);
void		ft_pb(void);
void		ft_sa(void);
void		ft_sb(void);
//		Moviments

int			ft_getmax(t_list *stack);
int			ft_getmin(t_list *stack);

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Extra Functions used for debugging!
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
void		print_stacks(void);
int			ft_sorted(t_list *example);

#endif