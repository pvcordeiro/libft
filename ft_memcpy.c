/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:09:25 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/05 18:25:34 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*start;

	start = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (start);
}
