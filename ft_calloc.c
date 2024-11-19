/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:36:53 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/19 13:58:26 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;

	if (size != 0 && nmemb != (size_t)-1 / size)
		return (NULL);
	alloc = malloc(nmemb * size);
	if(alloc)
		ft_bzero(alloc, nmemb * size);
	return (alloc);
}
