/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:00:15 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:16:18 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*int main (void)
{
	char dst[20] = "Ola, ";
	char src[] = "mundo!";
	size_t result;
	size_t dstsize = sizeof(dst);

	printf("Antes da concatenacao:\n");
	printf("dst: '%s'\n", dst);
	printf("src: '%s'\n", src);

	result = ft_strlcat(dst, src, dstsize);
	

	printf("Despois da concatenacao: %s\n", dst);
	printf("dst: '%s'\n", dst);
	printf("Valor retornado por ft_strlcat: %zu\n", result);
	printf("Comprimneto de dst despois da concatenacao: %zu\n", ft_strlen(dst));

	if (result >= dstsize)
		printf("AVISO: A string foi truncada! \n");

	return (0);
} 
int	main(void)
{
	char	dst[20] = "good";
	const char	src[] = "luck!";
	size_t	buffer_size = sizeof(dst);

	printf("antes da concatenacao: %s\n", dst);
	size_t	result = ft_strlcat(dst, src, buffer_size);
	printf("depois da concatenada %s\n", dst);
	printf("comprimento resultante %zu\n", result);
	return (0);
}*/