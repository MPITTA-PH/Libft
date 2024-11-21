/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:02:25 by mpitta-p          #+#    #+#             */
/*   Updated: 2024/11/20 20:02:28 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
