/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:43:26 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:56:07 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*last;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
		del(last->content);
		free(last);
	}
	*lst = NULL;
}
