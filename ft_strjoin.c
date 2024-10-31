/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:55:18 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 12:32:19 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	full_size;

	full_size = ft_strlen(s1) + ft_strlen(s2);
	cat = (char *)malloc(full_size + 1);
	if (!cat)
		return (NULL);
	ft_strlcpy(cat, s1, full_size + 1);
	ft_strlcat(cat, s2, full_size + 1);
	return (cat);
}
