/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:43 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 19:13:24 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *palheiro, const char *agulha, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (agulha[0] == '\0')
		return ((char *)palheiro);
	while (palheiro[i] != '\0' && i < len)
	{
		if (palheiro[i] == agulha[j])
		{
			while (palheiro[i + j] == agulha[j] && i + j < len)
			{
				if (agulha[j + 1] == '\0')
					return ((char *)palheiro + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	const char *palheiro = "teste para encontrar qualquer substring numa string";
	const char *agulha = "ing";
	size_t len = 50;
	char *result = ft_strnstr(palheiro, agulha, len);

	if (result != NULL)
	{
		printf("substring encontrada em: %s\n", result);
	}
	else
	{
		printf("substring nao encontrada,\n");
	}
	return (0);
}*/
