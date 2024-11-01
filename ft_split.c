/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/01 11:53:24 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_w_count(char const *s, char c)
{
	size_t	count;
	size_t	word;

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

static void	ft_fill_words(char **str, const char *s, char c, size_t *i)
{
	size_t	len;

	while (*s == c)
		s++;
	if (!*s)
		return ;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str[*i] = ft_substr(s, 0, len);
	if (!str[*i])
	{
		ft_freearrs(str, *i);
		return ;
	}
	(*i)++;
	ft_fill_words(str, s + len, c, i);
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
	size_t	i;

	str = NULL;
	str = ft_base_cases(str, s, c);
	if (str)
		return (str);
	str = (char **)ft_calloc(ft_w_count(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	ft_fill_words(str, s, c, &i);
	return (str);
}
