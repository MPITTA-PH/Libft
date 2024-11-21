/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:06:29 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 20:06:30 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new || !s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
