/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:02:56 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:13:42 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

// STACK LIST STRUCTURE
typedef struct s_stack
{
	t_list	*head;
	int		mean;
	int		size;
	int		best_friend_stack_index;
	int		cost_of_best_friend;
	int		cost_of_number;
	int		best;
	int		final_best_friend;
	int		final_number;
	int		index_number;
	int		size_b;
	int		size_a;
}			t_stack;

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Stack Manegment!
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
t_stack		*stack_a(void);
t_stack		*stack_b(void);
void		ft_data_updater(void);
void		ft_build_stack(char **arguments);
void		ft_put_top_a(t_list **lst, int index);
void		ft_put_top_b(t_list **lst, int index);
void		ft_leaks_manager(void);

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Algorithm Functions
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
void		ft_sort_tree(t_list **head);
void		ft_sort_five(t_list **lst,
				int witch);
void		ft_cost_algorithm(void);
void		ft_sort_four(t_list **lst);

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Moviments for the Push Swap
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_

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

// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
// Utils Functions to make the algorithm work
// *_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_
int			ft_is_sorted(t_list *list);
int			ft_get_index(int max, t_list *where);
int			ft_max(t_list *lst);
int			ft_min(t_list *lst);
int			dynamic_average_list(t_list *stack);
void		initialize_buddy_data(t_stack *cost_buddy, t_list **stack_a,
				t_list **stack_b);
int			dynamic_average_list(t_list *stack);
int			ft_get_best_buddy(t_list **main, int current_number_in_b);
int			ft_calculate_cost_up(int size, int index);
void		error_section(void *number);
void		split_clear(char **split);
void		print_stacks(void);
int			is_correct_input(char **av);
int			is_sign(char c);
int			nbstr_cmp(const char *s1, const char *s2);
#endif