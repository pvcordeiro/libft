/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:54 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/30 13:06:34 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int nb)
{
	int	count;

	if (nb < 0)
		nb = -nb;
	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	ft_negative(int digit, char *str, int n)
{
	n = -n;
	while (digit--)
	{
		str[digit] = n % 10 + '0';
		n /= 10;
	}
}

static void	ft_positive(int digit, char *str, int n)
{
	while (digit--)
	{
		str[digit] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = ft_counter(n);
	str = malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = 0;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		ft_negative(digits, str + 1, n);
		str[ft_strlen(str) + 1] = 0;
		return (str);
	}
	ft_positive(digits, str, n);
	str[ft_strlen(str) + 1] = 0;
	return (str);
}
