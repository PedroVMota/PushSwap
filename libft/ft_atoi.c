/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:23:43 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:13:49 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		s;
	long	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nptr[i] - '0' + nbr * 10;
		i++;
	}
	return (nbr * s);
}

/*
 int	main(void)
 {
	const char str[] = "1234";

	printf("%d\n", ft_atoi(str));
	return (0);
 }
*/