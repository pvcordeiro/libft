/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:55:18 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/29 15:13:03 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	char	*result;
	size_t	full_size;

	full_size = ft_strlen(s1) + ft_strlen(s2);	
	cat = malloc(full_size + 1);
	if (!cat)
		return (NULL);
	result = cat;
	while (*s1)
	{
		*cat = *s1;
		cat++;
		s1++;
	}
	while (*s2)
	{
		*cat = *s2;
		cat++;
		s2++;
	}
	*cat = '\0';
	return (result);
}
