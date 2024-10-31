/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:36:53 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 12:19:13 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc;
	size_t			full_s;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	full_s = nmemb * size;
	alloc = (unsigned char *)malloc(full_s);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, full_s);
	return ((void *)alloc);
}
