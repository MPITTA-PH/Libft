/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:20:26 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:13:45 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#inculde "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*int	main(void)
{
	char	input = 'A';
	char	output = ft_tolower(input);

	printf("Letra de entrada: %c\n", input);
	printf("Letra de saida: %c\n", output);

	return (0);
}*/
