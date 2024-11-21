/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:34:28 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:00:02 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int	main(void)
{
	char ch1 = 'A';
	char ch2 = '2';
	char ch3 = '$';

	printf("Is '%c' an alphanumeric caracter? %d\n", ch1, ft_isalnum(ch1));
	printf("Is '%c' an alphanumeric caracter? %d\n", ch2, ft_isalnum(ch2));
	printf("Is '%c' an alphanumeric caracter? %d\n", ch3, ft_isalnum(ch3));

	return (0);
}*/
