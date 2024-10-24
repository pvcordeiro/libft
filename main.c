/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:21 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/24 17:36:11 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strlen(void)
{
	char	str1[] = "Hello, World!";

	printf("ft_strlen: %zu (expected: %zu)\n", ft_strlen(str1), strlen(str1));
}

void	test_strlcpy(void)
{
	char	src[] = "Hello, World!";
	char	dst[20];
	size_t	n;

	n = ft_strlcpy(dst, src, sizeof(dst));
	printf("ft_strlcpy: %s (expected: Hello, World!)\n", dst);
	printf("ft_strlcpy return: %zu (expected: %zu)\n", n, strlen(src));
}

void	test_strlcat(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "World!";
	size_t	n;

	n = ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcat: %s (expected: Hello, World!)\n", dest);
	printf("ft_strlcat return: %zu (expected: %zu)\n", n, strlen(dest));
}

void	test_bzero(void)
{
	char	str[] = "Hello, World!";

	ft_bzero(str + 7, 6);
	printf("ft_bzero: %s (expected: Hello, )\n", str);
}

void	test_memset(void)
{
	char	str[10] = "abcdefghi";

	ft_memset(str, 'X', 4);
	printf("ft_memset: %s (expected: XXXXefghi)\n", str);
}

void	test_memcpy(void)
{
	char	dest[10];
	char	src[] = "Hello";

	ft_memcpy(dest, src, 6);
	printf("ft_memcpy: %s (expected: Hello)\n", dest);
}

void	test_memmove(void)
{
	char	str[20] = "abcdefghi";

	ft_memmove(str + 2, str, 8);
	printf("ft_memmove: %s (expected: ababcdefg)\n", str);
}

void	test_memchr(void)
{
	char	str[] = "abcdefghi";
	char	*result;

	result = ft_memchr(str, 'd', 9);
	printf("ft_memchr: %s (expected: defghi)\n", result);
}

void	test_calloc(void)
{
	int	*arr;

	arr = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		printf("ft_calloc arr[%d]: %d (expected: 0)\n", i, arr[i]);
	}
	free(arr);
}

void	test_strnstr(void)
{
	char	*big;
	char	*little;
	char	*result;

	big = "Hello there!";
	little = "there";
	result = ft_strnstr(big, little, strlen(big));
	printf("ft_strnstr: %s (expected: there!)\n", result);
}

void	test_strrchr(void)
{
	char	str[] = "Hello, World!";
	char	*result;

	result = ft_strrchr(str, 'o');
	printf("ft_strrchr: %s (expected: o, World!)\n", result);
}

void	test_strchr(void)
{
	char	str[] = "Hello, World!";
	char	*result;

	result = ft_strchr(str, 'W');
	printf("ft_strchr: %s (expected: World!)\n", result);
}

void	test_strdup(void)
{
	char	*str;
	char	*dup;

	str = "Hello, World!";
	dup = ft_strdup(str);
	printf("ft_strdup: %s (expected: Hello, World!)\n", dup);
	free(dup);
}

void	test_strncmp(void)
{
	char	*s1;
	char	*s2;
	int		cmp;

	s1 = "Hello";
	s2 = "Hellp";
	cmp = ft_strncmp(s1, s2, 4);
	printf("ft_strncmp: %d (expected: 0)\n", cmp);
}

void	test_memcmp(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdeg";
	int		cmp;

	cmp = ft_memcmp(str1, str2, 6);
	printf("ft_memcmp: %d (expected: < 0)\n", cmp);
}

void	test_atoi(void)
{
	char	*str;
	int		result;

	str = "   -42";
	result = ft_atoi(str);
	printf("ft_atoi: %d (expected: -42)\n", result);
}

void	test_isalnum(void)
{
	char	c;

	c = 'A';
	printf("ft_isalnum('%c'): %d (expected: 1)\n", c, ft_isalnum(c));
}

void	test_isalpha(void)
{
	char	c;

	c = 'a';
	printf("ft_isalpha('%c'): %d (expected: 1)\n", c, ft_isalpha(c));
}

void	test_isdigit(void)
{
	char	c;

	c = '5';
	printf("ft_isdigit('%c'): %d (expected: 1)\n", c, ft_isdigit(c));
}

void	test_isascii(void)
{
	char	c;

	c = 'A';
	printf("ft_isascii('%c'): %d (expected: 1)\n", c, ft_isascii(c));
}

void	test_isprint(void)
{
	char	c;

	c = ' ';
	printf("ft_isprint('%c'): %d (expected: 1)\n", c, ft_isprint(c));
}

void	test_tolower(void)
{
	char	c;

	c = 'A';
	printf("ft_tolower('%c'): %c (expected: a)\n", c, ft_tolower(c));
}

void	test_toupper(void)
{
	char	c;

	c = 'a';
	printf("ft_toupper('%c'): %c (expected: A)\n", c, ft_toupper(c));
}

int	main(void)
{
	test_strlen();
	test_strlcpy();
	test_strlcat();
	test_bzero();
	test_memset();
	test_memcpy();
	test_memmove();
	test_memchr();
	test_calloc();
	test_strnstr();
	test_strrchr();
	test_strchr();
	test_strdup();
	test_strncmp();
	test_memcmp();
	test_atoi();
	test_isalnum();
	test_isalpha();
	test_isdigit();
	test_isascii();
	test_isprint();
	test_tolower();
	test_toupper();
	return (0);
}
