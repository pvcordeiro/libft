/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 20:34:53 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	w_count(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!word)
			{
				word = 1;
				count++;
			}
		}
		else
			word = 0;
		s++;
	}
	return (count);
}

static void	v_init(size_t *a, size_t *b)
{
	*a = 0;
	*b = 0;
}

static void	*panic_button(char **arr, size_t sub_i)
{
	size_t	i;

	i = 0;
	while (i < sub_i)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	sub_i;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((w_count(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	v_init(&sub_i, &i);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i++] != c)
			i++;
		if (start < i)
		{
			arr[sub_i] = ft_substr(s, start, i - start);
			if (!arr[sub_i])
				return (panic_button(arr, sub_i));
			sub_i++;
		}
	}
	return (arr);
}
