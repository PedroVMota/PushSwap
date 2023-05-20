/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:05:53 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:56:33 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)c == (s[i]))
			return (&((char *)s)[i]);
		i++;
	}
	if ((unsigned char)c == (s[i]))
		return (&((char *)s)[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvxz";
	char	d;

	d = '0';
	printf("%s\n", ft_strchr(src, d));
}
*/