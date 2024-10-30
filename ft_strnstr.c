/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:24:51 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/30 20:44:19 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	if (!little[0])
		return ((char *)big);
	big_i = 0;
	while (big[big_i] && big_i < len)
	{
		little_i = 0;
		while (big[big_i + little_i] == little[little_i] && (big_i
				+ little_i) < len)
		{
			if (!little[little_i + 1])
				return ((char *)&big[big_i]);
			little_i++;
		}
		big_i++;
	}
	return (NULL);
}
