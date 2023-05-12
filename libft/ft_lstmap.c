/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:06 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/12 17:51:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int(*f)(int), void (*del)(int))
{
	t_list	*newlst;
	t_list	*ptr;

	ptr = NULL;
	while (lst)
	{
		newlst = ft_lstnew((int)f(lst->content));
		if (!newlst)
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
		ft_lstadd_back(&ptr, newlst);
		lst = lst->next;
	}
	return (ptr);
}
