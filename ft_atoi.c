/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:08:59 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/21 16:34:57 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sinal;

	i = 0;
	res = 0;
	sinal = 1;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sinal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * sinal);
}
/*
int main(void)
{
	const char *nptr = "-1832";
	printf("%d", ft_atoi(nptr));
	return (0);
}*/
