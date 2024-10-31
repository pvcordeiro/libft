/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:36:32 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 13:02:56 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;

	len = strlen(s);
	dup = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}
