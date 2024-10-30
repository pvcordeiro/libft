/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:21 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/30 16:22:12 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <bsd/string.h>

void	test_isalnum(void)
{
	char	c = 'A';
	char	a = '%';
	printf("ft_isalnum('%c'): %d | isalnum ('%c'): %d\nft_isalnum('%c'): %d | isalnum ('%c'): %d\n", c, ft_isalnum(c), c, isalnum(c), a, ft_isalnum(a), a, isalnum(a));
}

void	test_isalpha(void)
{
	char	c = 'a';
	char	a = '9';
	printf("ft_isalpha('%c'): %d | isalpha ('%c'): %d\nft_isalpha('%c'): %d | isalpha ('%c'): %d\n", c, ft_isalpha(c), c, isalpha(c), a, ft_isalpha(a), a, isalpha(a));
}

void	test_isdigit(void)
{
	char	c = '5';
	char	a = 'a';
	printf("ft_isdigit('%c'): %d | isdigit ('%c'): %d\nft_isdigit('%c'): %d | isdigit ('%c'): %d\n", c, ft_isdigit(c), c, isdigit(c), a, ft_isdigit(a), a, isdigit(a));
}

void	test_isascii(void)
{
	char	c = 'A';
	unsigned char	a = 130;
	printf("ft_isascii('%c'): %d | isascii ('%c'): %d\nft_isascii('%c'): %d | isascii ('%c'): %d\n", c, ft_isascii(c), c, isascii(c), a, ft_isascii(a), a, isascii(a));
}

void	test_isprint(void)
{
	char	c = ' ';
	char	a = 3;
	printf("ft_isprint('%c'): %d | isprint ('%c'): %d\nft_isprint('%c'): %d | isprint ('%c'): %d\n", c, ft_isprint(c), c, isprint(c), a, ft_isprint(a), a, isprint(a));
}

void	test_tolower(void)
{
	char	c = 'A';
	char	a = 'b';
	printf("ft_tolower('%c'): %c | tolower ('%c'): %c\nft_tolower('%c'): %c | tolower ('%c'): %c\n", c, ft_tolower(c), c, tolower(c), a, ft_tolower(a), a, tolower(a));
}

void	test_toupper(void)
{
	char	c = 'a';
	char	a = '%';
	printf("ft_toupper('%c'): %c | toupper ('%c'): %c\nft_toupper('%c'): %c | toupper ('%c'): %c\n", c, ft_toupper(c), c, toupper(c), a, ft_toupper(a), a, toupper(a));
}

void	test_strlen(void)
{
	char	str1[] = "Hello, World!";

	printf("ft_strlen: %zu | strlen: %zu\n", ft_strlen(str1), strlen(str1));
}

void	test_strlcpy(void)
{
	char	src[] = "Hello, World!";
	char	ft_dst[20];
	char	dst[20];
	size_t	ft;
	size_t	orig;

	ft = ft_strlcpy(ft_dst, src, sizeof(ft_dst));
	orig = ft_strlcpy(dst, src, sizeof(dst));
	printf("ft_strlcpy: %s | strlcpy: %s\n", ft_dst, dst);
	printf("ft_strlcpy return: %zu | strlcpy return: %zu\n", ft, orig);
}

void	test_strlcat(void)
{
	char	ft_dest[] = "Hello, ";
	char	dest[] = "Hello, ";
	char	src[] = "World!";
	size_t	ft;
	size_t	orig;

	ft = ft_strlcat(ft_dest, src, sizeof(ft_dest));
	orig = ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcat: %s | strlcat: %s\n", ft_dest, dest);
	printf("ft_strlcat return: %zu | strlcat return: %zu\n", ft, orig);
}

void	test_bzero(void)
{
	char	ft_str[] = "Hello, World!";
	char	str[] = "Hello, World!";
	size_t	n = 2;

	ft_bzero(ft_str, n);
	bzero(str, n);
	printf("ft_bzero: %s | bzero: %s\n", ft_str + n, str + n);
}

void	test_memset(void)
{
	char	ft_str[] = "abcdefghi";
	char	str[] = "abcdefghi";

	ft_memset(ft_str, 48, 4);
	memset(str, 48, 4);
	printf("ft_memset: %s | memset: %s\n", ft_str, str);
}

void	test_memcpy(void)
{
	char	ft_dest[10];
	char	dest[10];
	char	src[] = "Hello";

	ft_memcpy(ft_dest, src, 6);
	memcpy(dest, src, 6);
	printf("ft_memcpy: %s | memcpy: %s\n", ft_dest, dest);
}

void	test_memmove(void)
{
	char	ft_str[] = "rem ipssum dolor sit amet";
	char	str[] = "rem ipssum dolor sit amet";
	char	ft_dest[sizeof(ft_str)];
	char	dest[sizeof(str)];
	size_t	n = 10;
	
	ft_memmove(ft_dest, ft_str, n);
	ft_dest[n] = 0;
	memmove(dest, str, n);
	dest[n] = 0;

	printf("ft_memmove: %s | memmove: %s\n", ft_dest, dest);
}

void	test_memchr(void)
{
	char	str[] = "abcdefghijkl";
	size_t	n = 9;
	printf("ft_memchr: %s | memchr: %s\n", (char *)ft_memchr(str, 'd', n), (char *)memchr(str, 'd', n));
}

void	test_calloc(void)
{
	size_t		n = 5;
	size_t		*ft_arr = (size_t *)ft_calloc(n, sizeof(size_t));
	size_t		*arr = (size_t *)calloc(n, sizeof(size_t));
	size_t		i = 0;

	while (i < n)
	{
		printf("ft_calloc arr[%zu]: %zu | calloc arr[%zu]: %zu\n", i, ft_arr[i], i, arr[i]);
		i++;
	}
	free(ft_arr);
	free(arr);
}

void	test_strnstr(void)
{
	char	*big = "Hello there!";
	char	*little = "there";

	printf("ft_strnstr: %s | strnstr: %s\n", ft_strnstr(big, little, strlen(big)), strnstr(big, little, strlen(big)));
}

void	test_strrchr(void)
{
	char	str[] = "Hello, World!";

	printf("ft_strrchr: %s | strrchr: %s\n", ft_strrchr(str, '\0'), strrchr(str, '\0'));
}

void	test_strchr(void)
{
	char	str[] = "Hello, World!";

	printf("ft_strchr: %s | strchr: %s\n", ft_strchr(str, 'W'), strchr(str, 'W'));
}

void	test_strdup(void)
{
	char	*str = "Hello, World!";
	char	*ft_dup = ft_strdup(str);
	char	*dup = strdup(str);

	printf("ft_strdup: %s | strdup: %s\n", ft_dup, dup);
	free(ft_dup);
	free(dup);
}

void	test_strncmp(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hellt";

	printf("ft_strncmp: %d | strncmp: %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
}

void	test_memcmp(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdep";

	printf("ft_memcmp: %d | memcmp: %d\n", ft_memcmp(str1, str2, 6), memcmp(str1, str2, 6));
}

void	test_atoi(void)
{
	char	*str = "   -42";

	printf("ft_atoi: %d | atoi: %d\n", ft_atoi(str), atoi(str));
}

void	test_substr(void)
{
	char const	*str = "teste123";
	
	printf("ft_substr:\nInput: %s | ft_substr: %s | expected: 123\n", str, ft_substr(str, 5, sizeof(str)));
}

void	test_strjoin(void)
{
	char const	*s1 = "abc";
	char const	*s2 = "def";

	printf("ft_strjoin:\nString 1: %s | String 2: %s | ft_strjoin: %s | expected: abcdef\n", s1, s2, ft_strjoin(s1, s2));
}


void	test_ft_putchar_fd(void)
{
	char	c = 'A';
	printf("ft_putchar_fd: ");
	fflush(stdout);
	ft_putchar_fd(c, 1);
	printf(" | expected: %c\n", c);
}

void	test_ft_putstr_fd(void)
{
	char	*str = "But everybody call me Giorgio";
	printf("ft_putstr_fd: ");
	fflush(stdout);
	ft_putstr_fd(str, 1);
	printf(" | expected: %s\n", str);
}
void	test_ft_putendl_fd(void)
{
	char	*str = "But everybody call me Giorgio";
	printf("ft_putendl_fd: ");
	fflush(stdout);
	ft_putendl_fd(str, 1);
	printf(" | expected: %s\n", str);
}

void	test_ft_putnbr_fd(void)
{
	int	n = -85730;
	printf("ft_puntbr_fd: ");
	fflush(stdout);
	ft_putnbr_fd(n, 1);
	printf(" | expected: %d", n);
}

void	test_ft_itoa(void)
{
	int	nb = 0;
	printf("\nft_itoa: %s | expected: %d", ft_itoa(nb), nb);
}

int	main(void)
{
	printf("\tThe output of the first four functions are not the same\n\tbecause the standard library returns a non-zero\n\tvalue or 0, so even though the outputs are not the same,\n\tthey behave the same way by returning basically\n\ttrue(non-zero) or false(0)\n");
	printf("\n");
	test_isalnum();
	printf("\n");
	test_isalpha();
	printf("\n");
	test_isdigit();
	printf("\n");
	test_isprint();
	printf("\n");
	test_isascii();
	printf("\n");
	test_tolower();
	printf("\n");
	test_toupper();
	printf("\n");
	test_strlen();
	printf("\n");
	test_strlcpy();
	printf("\n");
	test_strlcat();
	printf("\n");
	test_bzero();
	printf("\n");
	test_memset();
	printf("\n");
	test_memcpy();
	printf("\n");
	test_memmove();
	printf("\n");
	test_memchr();
	printf("\n");
	test_calloc();
	printf("\n");
	test_strnstr();
	printf("\n");
	test_strrchr();
	printf("\n");
	test_strchr();
	printf("\n");
	test_strdup();
	printf("\n");
	test_strncmp();
	printf("\n");
	test_memcmp();
	printf("\n");
	test_atoi();
	printf("\n\n\tThere's no C native functions of the functions\n\tbelow, so the output is expected\n\taccording to the project description\n\n\n");
	test_substr();
	printf("\n");
	test_strjoin();
	printf("\n");
	test_ft_putchar_fd();
	printf("\n");
	test_ft_putstr_fd();
	printf("\n");
	test_ft_putendl_fd();
	printf("\n");
	test_ft_putnbr_fd();
	printf("\n");
	test_ft_itoa();
	printf("\n");
	
	
	return (0);
}
