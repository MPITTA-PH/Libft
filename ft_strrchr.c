/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:33:08 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:21:22 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	char_c;

	i = ft_strlen((char *)s);
	char_c = (unsigned char) c;
	if (char_c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == char_c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *s = "abbcccddddc";
	int c = 'c';
	printf("%s", ft_strrchr(s, c));
//	strrchr(s, c);
	return (0);
}*/
