/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:54:14 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:21:11 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr;
	const char	*seta;
	size_t		i;

	ptr = dest;
	seta = src;
	i = 0;
	if (!ptr && !seta)
		return (0);
	while (i < n)
	{
		ptr[i] = seta[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	char dest[3] = "aaa";
	const char *src = "bbb";

	printf("Antes da copia: %s\n", dest);
	ft_memcpy(dest, src, 4);

	printf("Despois da copia: %s\n", dest);
	return (0);
}*/
