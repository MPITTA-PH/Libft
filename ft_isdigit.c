/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:35 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:19:31 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int main(void)
{
    char ch1 = '1';
    char ch2 = '9';
    char ch3 = '0';
    char ch4 = 'a';

    printf("Is '%c' a digit? %d\n", ch1, ft_isdigit(ch1));
    printf("Is '%c' a digit? %d\n", ch2, ft_isdigit(ch2));
    printf("Is '%c' a digit? %d\n", ch3, ft_isdigit(ch3));
    printf("Is '%c' a digit? %d\n", ch4, ft_isdigit(ch4));
}*/
