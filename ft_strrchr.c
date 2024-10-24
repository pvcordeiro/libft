/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:32:43 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/24 12:50:15 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;

	chr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			chr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (chr);
}
