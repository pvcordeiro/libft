/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/01 12:39:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_w_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	*ft_freearrs(char **arr, size_t sub_i)
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

static void	ft_fill_words(char **str, const char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		str[i] = ft_substr(s, 0, len);
		if (!str[i])
		{
			ft_freearrs(str, i);
			return ;
		}
		i++;
		s += len;
		while (*s == c)
			s++;
	}
}
static char **ft_base_cases(char **str, char const *s, char c)
{
	if (!s || !*s)
		return ((char **)ft_calloc(1, sizeof(char *)));
	if (!c)
	{
		str = (char **)ft_calloc(2, sizeof(char *));
		if (str)
			str[0] = ft_strdup(s);
		return (str);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = NULL;
	str = ft_base_cases(str, s, c);
	if (str)
		return (str);
	str = (char **)ft_calloc(ft_w_count(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	ft_fill_words(str, s, c);
	return (str);
}
