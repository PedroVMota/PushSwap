/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:27:36 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:56:46 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((((unsigned char *)s1)[i] || ((unsigned char *)s2)[i]) && n > 0)
	{
		if ((((unsigned char *)s1)[i]) > (((unsigned char *)s2)[i]))
			return (1);
		if ((((unsigned char *)s1)[i]) < (((unsigned char *)s2)[i]))
			return (-1);
		i++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	src1[] = "lisb";
	char	src2[] = "lisboa";

	printf("%d\n", ft_strncmp(src1, src2, 5));
}
*/