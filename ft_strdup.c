/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:54:19 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 18:06:17 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main(void)
{
    const char *original = "Hello World";
    char *duplicado;

    duplicado = ft_strdup(original);

    if (duplicado == NULL)
    {
        printf("Erro\n");
        return (1);
    }
    printf("Original: %s\n", original);
    printf("Duplicado: %s\n", duplicado);

    free(duplicado);

    return (0);
}
*/