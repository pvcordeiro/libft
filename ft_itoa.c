/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:54 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/05 16:03:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_int_counter(long nb)
{
	long	count;

	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	ft_put_itoa(long i, char *str, long n)
{
	while (i)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	digits;
	long	nb;

	nb = n;
	digits = ft_int_counter(nb);
	str = ft_calloc(digits + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		ft_put_itoa(digits - 1, str + 1, nb);
	}
	else
		ft_put_itoa(digits, str, nb);
	return (str);
}
