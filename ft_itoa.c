/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:05:42 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:47:06 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

static int	numbersize(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		i += 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)

{
	char			*str;
	unsigned int	nbr;
	unsigned int	i;

	i = numbersize(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		str[0] = '0';
	str[i] = '\0';
	while (nbr != 0)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}
/*
int main(void)
{
    char    *resultado;

    resultado = ft_itoa(-123);
    if (resultado == NULL)
    {
            printf("Erro na alocacao de memoria para o numero -123.\n");
            return (1);
    }
    printf("ft_itoa(-123) = %s\n", resultado);
    free(resultado);

    return (0);
}*/