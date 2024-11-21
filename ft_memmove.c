/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:26:57 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:15:35 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char src[] = "1234567890";
	char dest[13];
	ft_memmove(dest, src, sizeof(dest) - 1);
		dest[sizeof(dest) - 1] = '\0';

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}*/
