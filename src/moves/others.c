/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:41:19 by pvital-m          #+#    #+#             */
/*   Updated: 2023/05/16 20:34:57 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function will rotate the the stack a certain times
void	ft_put_top_a(t_list **lst, int index)
{
	int	i;
	int	size;

	size = ft_lstsize(*lst);
	if (index == -1)
		return ;
	else if ((size / 2) >= index)
	{
		i = index;
		while (i)
		{
			ft_ra();
			i--;
		}
	}
	else if ((size / 2) < index)
	{
		i = index;
		while (i < size)
		{
			ft_rra();
			i++;
		}
	}
}

// This function will rotate the the stack a certain times
void	ft_put_top_b(t_list **lst, int index)
{
	int	i;
	int	size;

	size = ft_lstsize(*lst);
	if (index == -1)
		return ;
	else if ((size / 2) >= index)
	{
		i = index;
		while (i)
		{
			ft_rb();
			i--;
		}
	}
	else if ((size / 2) < index)
	{
		i = index;
		while (i < size)
		{
			ft_rrb();
			i++;
		}
	}
}

// This function will return the max value of the stack
int	ft_max(t_list *lst)
{
	int	i;

	if (!lst)
		return (-1);
	i = *(int *)lst->content;
	while (lst)
	{
		if (i < *(int *)lst->content)
			i = *(int *)lst->content;
		lst = lst->next;
	}
	return (i);
}

// This function will return the min value of the stack
int	ft_min(t_list *lst)
{
	int	i;

	if (!lst)
		return (-1);
	i = *(int *)lst->content;
	while (lst)
	{
		if (i > *(int *)lst->content)
			i = *(int *)lst->content;
		lst = lst->next;
	}
	return (i);
}

//	This function will return the index  of the number and the corresponding
//	stack
int	ft_get_index(int max, t_list *where)
{
	int	i;

	i = 0;
	while (where)
	{
		if (*(int *)where->content == max)
			return (i);
		i++;
		where = where->next;
	}
	return (-1);
}
