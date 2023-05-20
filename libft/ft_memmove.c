/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 04:05:43 by chaleirag14       #+#    #+#             */
/*   Updated: 2023/05/19 15:56:20 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = n;
	if (src < dest)
	{
		while (len > 0)
		{
			((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	src[] = {1, 2, 3, 4, 5, 6, 7};

	ft_memmove(dest, src, 5);
	printf("%d\n", dest[5]);
}
*/
/*	while (n > i)
	{
		t[i] = ((char *)src)[i];
		i++;
	}
	i = 0;*/