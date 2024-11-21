/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:24:57 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:18:21 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	ch;
	size_t	i;

	str = (char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return ((void *) NULL);
}
/*
int main(void)
{
	const void *str = "aaaabcde";
	int c = 'b';
	size_t n = 5;

	printf("%s", ft_memchr(str, c, n));
	return (0);
}*/
