/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:37 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:16:58 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		if (s1[i] == '\0')
		{
			return (-1);
		}
		if (s2[i] == '\0')
		{
			return (1);
		}
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char *s1 = "B";
	const char *s2 = "A";

	int result = ft_strncmp(s1, s2, 10);

	if (result < 0)
	{
		printf("s1 menor que s2\n");
	}
		else if (result > 0)
	{
		printf("s1 maior que s2\n");
	}
	else
	{
		printf("s1 e s2 sao iaguais nos primeiros 5 caracteres");
	}
	return (0);
}*/
