/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:00:17 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/24 12:50:14 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	char			*cast;
	unsigned char	chr;
	size_t			i;

	cast = s;
	chr = c;
	i = 0;
	while (i < n)
	{
		cast[i] = chr;
		i++;
	}
}
