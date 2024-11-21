/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:55:26 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:42:29 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*int	main(void)
{
	char input = 'a';
	char output = ft_toupper(input);

	printf("caracter de entrada: %c\n", input);
	printf("caracter de saida: %c\n", output);
	return (0);
}*/
