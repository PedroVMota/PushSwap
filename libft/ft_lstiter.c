/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:07:05 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:56:09 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;
	t_list	*last;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
		f(last->content);
	}
}
