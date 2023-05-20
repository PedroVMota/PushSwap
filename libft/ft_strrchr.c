/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:45:37 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/19 15:56:49 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		return ((char *)&s[i + 1]);
	while (i >= 0)
	{
		if ((unsigned char)c == (s[i]))
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	 const char	src[] = "abqqqqcdefqqqghijqqqklmnopqarsquvxz";
	char	d;

	d = 't';
	printf("%s\n", ft_strrchr(src, d));
}
 */