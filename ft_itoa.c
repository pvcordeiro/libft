/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:54 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/30 18:13:20 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_int_counter(long nb)
{
	long	count;

	if (nb <= 0)
		count = 1;
	else
		count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	ft_put_itoa(long digit, char *str, long n)
{
	while (digit)
	{
		str[digit - 1] = n % 10 + '0';
		n /= 10;
		digit--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	digits;
	long	nb;

	nb = n;
	digits = ft_int_counter(nb);
	str = malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = 0;
	if (nb == 0)
		return (ft_strdup("0"));
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
