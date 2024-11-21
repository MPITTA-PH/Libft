/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:54:19 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:19:14 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == char_c)
			return ((char *)s);
		s++;
	}
	if (char_c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	const char *s = "aebbcccddddc";
	int c = 'd';
	printf("%s", strchr(s, c));
	//» strrchr(s, c);
	return (0);
}*/
