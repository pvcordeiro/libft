/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:36:53 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/24 16:29:07 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc;
	size_t			full_s;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	full_s = nmemb * size;
	alloc = (unsigned char *)malloc(full_s);
	if (!alloc)
		return (NULL);
	i = 0;
	while (i < full_s)
	{
		alloc[i] = '\0';
		i++;
	}
	return ((void *)alloc);
}
