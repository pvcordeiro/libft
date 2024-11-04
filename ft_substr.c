/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:30:34 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/04 15:34:09 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > size - start)
		len = size - start;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	return (sub);
}
