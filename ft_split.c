/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/01 19:07:11 by paude-so         ###   ########.fr       */
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

static void	ft_freearrs(char **arr)
{
	char	**start;

	start = arr;
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(start);
}

static void	ft_fill_words(char **str, const char *s, char c)
{
	char		**current;
	const char	*start;

	current = str;
	while (*s == c)
		s++;
	while (*s)
	{
		start = s;
		while (*s && *s != c)
			s++;
		*current = ft_substr(start, 0, s - start);
		if (!*current)
		{
			ft_freearrs(str);
			return ;
		}
		current++;
		while (*s == c)
			s++;
	}
}

static char	**ft_base_cases(char **str, char const *s, char c)
{
	if (!s || !*s)
		return ((char **)ft_calloc(1, sizeof(char *)));
	if (!c)
	{
		str = (char **)ft_calloc(2, sizeof(char *));
		if (str)
		{
			*str = ft_strdup(s);
			if (!*str)
			{
				free(str);
				return (NULL);
			}
		}
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
