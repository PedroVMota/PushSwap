/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:02:17 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 13:31:38 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Calculates de number of the steps that takes the current number to the top;
int	ft_calculate_cost_up(int size, int index)
{
	int	counter;

	counter = 0;
	if (index <= (size / 2))
	{
		counter = index;
	}
	else if (index > (size / 2))
		counter = size - index;
	return (counter);
}

int	index_feed_back(int best_buddy)
{
	t_list	*local;
	int		index;

	index = 0;
	local = stack_a()->head;
	while (stack_a()->head)
	{
		if (*(int *)stack_a()->head->content == best_buddy)
			break ;
		index++;
		stack_a()->head = stack_a()->head->next;
	}
	stack_a()->head = local;
	return (index);
}

int	get_best_friend(int nb)
{
	t_list	*local;
	int		counter;
	int		best_slave;
	int		tmp_score;

	best_slave = INT_MAX;
	counter = INT_MAX;
	local = stack_a()->head;
	while (stack_a()->head)
	{
		printf(">> %i\n", *(int *)stack_a()->head->content - nb);
		tmp_score = *(int *)stack_a()->head->content - nb;
		if ((tmp_score < counter) && (*(int *)stack_a()->head->content > nb))
		{
			counter = tmp_score;
			best_slave = *(int *)stack_a()->head->content;
		}
		stack_a()->head = stack_a()->head->content;
	}
	stack_a()->head = local;
	if (best_slave == INT_MAX)
		return (-1);
	return (index_feed_back(best_slave));
}

void	ft_put_top_a(t_list **lst, int index)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(*lst);
	if (index == -1)
		return ;
	else if ((size / 2) >= index)
	{
		i = index + 1;
		while (--i)
			ft_ra();
	}
	else if ((size / 2) < index)
	{
		i = index;
		while (i)
		{
			ft_rra();
			i++;
		}
	}
}

void	ft_put_top_b(t_list **lst, int index)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(*lst);
	if (index == -1)
		return ;
	else if ((size / 2) >= index)
	{
		i = index + 1;
		while (--i)
			ft_rb();
	}
	else if ((size / 2) < index)
	{
		i = index;
		while (i)
		{
			ft_rrb();
			i++;
		}
	}
}

void	ft_sort_the_stack(t_stack *buddy)
{
	ft_put_top_a(&stack_a()->head, buddy->final_bf);
	ft_put_top_b(&stack_b()->head, buddy->final_nb);
	ft_pa();
}

//Calculates all the best_friend possibilities
//Chose the one that cost less to take to the top
//After, Call the function above to take the A and his
//best friends take being together
void	best_friends_sorting(void)
{
	t_stack	buddy;

	set_best_buddy_init(&buddy);
	while (stack_b()->head)
	{
		buddy.index_bf = get_best_friend(*(int *)stack_b()->head->content);
		if (buddy.index_bf != -1)
		{
			buddy.cost_bf = ft_calculate_cost_up(buddy.size_a, buddy.index_bf);
			buddy.cost_nb = ft_calculate_cost_up(buddy.size_b, buddy.index_nb);
			if ((buddy.cost_bf + buddy.cost_nb) < buddy.best && (buddy.cost_bf
					+ buddy.cost_nb) >= 0)
			{
				buddy.final_nb = buddy.index_nb;
				buddy.final_bf = buddy.index_bf;
				buddy.best = buddy.cost_nb + buddy.cost_bf;
			}
		}
		stack_b()->head = stack_b()->head->next;
		buddy.index_nb++;
	}
	stack_b()->head = buddy.head;
	ft_sort_the_stack(&buddy);
}

int	ft_get_index(int nb, t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (*(int *)lst->content == nb)
			return (i);
		i++;
		lst = lst->next;
	}
	return (-1);
}

void	ft_rotate_until_last_is_last(t_list **stack_a)
{
	int	max;
	int	index;
	int	nb_rotations;

	max = ft_getmax(*stack_a);
	index = ft_get_index(max, *stack_a) + 1;
	nb_rotations = ft_lstsize(*stack_a) - index;
	if (index < nb_rotations)
		while (index--)
			ft_ra();
	else
		while (nb_rotations--)
			ft_rra();
}

//This function i'll check each number of the stack a
//if the current number, is below the current the mean
//of his stack then push b, otherwise rotate
void	ft_average_algorithm(void)
{
	int	avg;

	while (stack_a()->size > 3)
	{
		avg = ft_avg(stack_a()->head, ft_lstsize(stack_a()->head));
		if (*(int *)stack_a()->head->content < avg)
		{
			ft_pb();
			if (*(int *)stack_b()->head->content < ft_avg(stack_b()->head,
															ft_lstsize(stack_b()->head)))
				ft_rb();
		}
		else
			ft_ra();
		ft_data_updater();
	}
	ft_data_updater();
	while (stack_b()->head)
		best_friends_sorting();
	ft_rotate_until_last_is_last(&stack_a()->head);
}

void	ft_init(void)
{
	ft_data_updater();
	if (stack_a()->size == 2)
	{
		if (!ft_sorted(stack_a()->head))
			ft_sa();
	}
	else if (stack_a()->size == 3)
		ft_stack_manager_tree(&stack_a()->head);
	else if (stack_a()->size == 5)
		ft_stack_manager_five();
	else if (stack_a()->size >= 6)
		ft_average_algorithm();
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_build_stack(av);
		ft_init();
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
