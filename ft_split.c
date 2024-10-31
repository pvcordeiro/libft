/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/31 19:58:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	w_count(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while(*s)
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	sub_size = 0;
	size_t	i = 0;
	size_t	start;
	
	arr = (char **)ft_calloc((w_count(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while(s[i] == c)
			i++;
		start = i;
		while(s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			arr[sub_size] = ft_substr(s, start, i - start);
			sub_size++;
		}
	}
	return (arr);
}
