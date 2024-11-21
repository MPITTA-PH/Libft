/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:05:42 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:12:05 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	unsigned char str[10] = "42School";

	printf("Antes de zerar: %s\n", str);
	ft_bzero(str, 10);

	printf("Depois de zerar: %s\n", str);
	return (0);
}*/
