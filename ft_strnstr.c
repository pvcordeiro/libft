/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:24:51 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 17:55:10 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;

	if (!len)
		return ((char *)big);
	l_len = ft_strlen(little);
	while (*big && len >= l_len)
	{
		if (!ft_strncmp(big, little, l_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
