/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:21 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/01 13:26:43 by paude-so         ###   ########.fr       */
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
	char	ft_dst[sizeof(src)];
	char	dst[sizeof(src)];
	size_t	ft;
	size_t	orig;

	ft = ft_strlcpy(ft_dst, src, sizeof(ft_dst));
	orig = strlcpy(dst, src, sizeof(dst));
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

	ft_memset(ft_str, 'Z', 4);
	memset(str, 'Z', 4);
	printf("ft_memset: %s | memset: %s\n", ft_str, str);
}

void	test_memcpy(void)
{
	char	ft_dest[] = "Original";
	char	dest[] = "Original";
	char	src[] = "Hello";

	ft_memcpy(ft_dest, src, 4);
	memcpy(dest, src, 4);
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
	printf("\t\tft_calloc\n\n");
	size_t	n = 5;
	char	*arr_ft = "ABC";
	char	*arr = "ABC";
	printf("  arr_ft before ft_calloc: %s | arr before calloc: %s\n", arr_ft, arr);
	arr_ft = (char *)ft_calloc(n, sizeof(char));
	arr = (char *)calloc(n, sizeof(char));
	printf("  arr_ft after ft_calloc: %s    | arr after calloc: %s\n", arr_ft, arr);
}

void	test_strnstr(void)
{
	char	*big = "Hello there!";
	char	*little = "t";

	printf("ft_strnstr: %s | strnstr: %s\n", ft_strnstr(big, little, strlen(big)), strnstr(big, little, strlen(big)));
}

void	test_strrchr(void)
{
	char	str[] = "Hello, World!";
	char	c = 'l';

	printf("ft_strrchr: %s | strrchr: %s\n", ft_strrchr(str, c), strrchr(str, c));
}

void	test_strchr(void)
{
	printf("\t\tft_strchr\n\n");
	char	str[] = "Hello, World!";
	char	c = 'o';

	printf("  String: %s | Char: %c\n  ft_strchr: %s\n  strchr: %s\n", str, c, ft_strchr(str, c), strchr(str, c));
}

void	test_strdup(void)
{
	printf("\t\tft_strdup\n\n");
	char	*str = "Hello, World!";
	char	*ft_dup = ft_strdup(str);
	char	*dup = strdup(str);

	printf("  Source string: %s\n  ft_strdup: %s\n  strdup: %s\n", str, ft_dup, dup);
	free(ft_dup);
	free(dup);
}

void	test_strncmp(void)
{
	printf("\t\tft_strncmp\n\n");
	char	*s1 = "Hello";
	char	*s2 = "Helto";
	size_t	n = 4;

	printf("  String1: %s | String2: %s\n  ft_strncmp: %d\n  strncmp: %d\n", s1, s2, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

void	test_memcmp(void)
{
	printf("\t\tft_memcmp\n\n");
	char	str1[] = "abcdef";
	char	str2[] = "abcZef";

	printf("  String1: %s | String2: %s\n  ft_memcmp: %d\n  memcmp: %d\n",str1, str2, ft_memcmp(str1, str2, 6), memcmp(str1, str2, 6));
}

void	test_atoi(void)
{
	printf("\t\tft_atoi\n\n");
	char	*str = "   -42";

	printf("  Test string: %s\n  ft_atoi: %d\n  atoi: %d\n", str, ft_atoi(str), atoi(str));
}

void	test_substr(void)
{
	printf("\t\tft_substr\n\n");
	char const		*str = "teste123";
	unsigned int	start = 5;
	size_t			max = 2;
	
	printf("  Input string: %s\n  Start at char: %d | Max length of: %zu\n  After ft_substr: %s", str, start, max, ft_substr(str, start, max));
}

void	test_strjoin(void)
{
	printf("\t\tft_strjoin\n\n");
	char const	*s1 = "abc";
	char const	*s2 = "def";

	printf("  String 1: %s | String 2: %s\n  After ft_strjoin: %s", s1, s2, ft_strjoin(s1, s2));
}


void	test_ft_putchar_fd(void)
{
	printf("\t\tft_putchar_fd\n\n");
	char	c = 'A';
	printf("  With printf: %c\n", c);
	printf("  With ft_putchar_fd: ");
	fflush(stdout);
	ft_putchar_fd(c, 1);
}

void	test_ft_putstr_fd(void)
{
	printf("\t\tft_putstr_fd\n\n");
	char	*str = "But everybody call me Giorgio";
	printf("  With printf: %s\n", str);
	printf("  With ft_putstr_fd: ");
	fflush(stdout);
	ft_putstr_fd(str, 1);
}
void	test_ft_putendl_fd(void)
{
	printf("\t\tft_putendl_fd\n\n");
	char	*str = "But everybody call me Giorgio";
	printf("  Testing string: %s\n", str);
	printf("  After ft_putendl_fd: ");
	fflush(stdout);
	ft_putendl_fd(str, 1);
	printf("  $");
}

void	test_ft_putnbr_fd(void)
{
	printf("\t\tft_putnbr_fd\n\n");
	int	n = -85730;
	printf("  Integer: %d\n", n);
	printf("  After ft_puntbr_fd: ");
	fflush(stdout);
	ft_putnbr_fd(n, 1);
}

void	test_ft_itoa(void)
{
	printf("\t\tft_itoa\n\n");
	int	nb1 = -2147483648;
	printf("  Integer: \"%d\" | After ft_itoa: \"%s\"\n", nb1, ft_itoa(nb1));
	int	nb2 = 0;
	printf("  Integer: \"%d\" | After ft_itoa: \"%s\"\n", nb2, ft_itoa(nb2));
	int	nb3 = 2147483647;
	printf("  Integer: \"%d\" | After ft_itoa: \"%s\"", nb3, ft_itoa(nb3));
}

char custom_toupper(unsigned int i, char c)
{
    (void)i;
    return ft_toupper(c);
}

void	test_ft_strmapi(void)
{
	char	*str = "abc";
	printf("\t\tft_strmapi\n\n");
	printf("  Original string: \"%s\"", str);
	printf("  After ft_strmapi: \"%s\"", ft_strmapi(str, custom_toupper));
}

void custom_tolower(unsigned int i, char *c)
{
    (void)i;
    c[0] = ft_tolower(c[0]);
}

void	test_ft_striteri(void)
{
	char	str[] = "ABC";
	printf("\t\tft_striteri\n\n");
	printf("  Original string: \"%s\"", str);
	ft_striteri(str, custom_tolower);
	printf("  After ft_striteri: \"%s\"", str);
	
}

void	test_ft_strtrim(void)
{
	char	*str = "aaaiiiaaiaMy name is Giovanni Giorgioiiaaiaiaiaaii";
	char	*trim = "ai";
	printf("\t\tft_strtrim\n\n");
	printf("  Original string: \"%s\"\n  To be trimmed with: \"%s\"\n  After ft_strtrim: \"%s\"",str, trim, ft_strtrim(str, trim));
}

void	test_ft_split(void)
{
	char	*str = "My name is Giovanni Giorgio but everybody calls me Giorgio";
	char	c = ' ';
	size_t	i = 0;
	char	**result = ft_split(str, c);
	
	printf("\t\tft_split\n\n");
	printf("  Original string: \"%s\"\n  Separator: \"%c\"\n  Output:\n", str, c);
	if (!result)
		return ;
	while(result[i])
	{
		printf("           \"%s\"\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

int	main(void)
{
	printf("\tThe output of the first four functions are different\n\tbecause the standard library returns a non-zero\n\tvalue or 0, so even though the outputs are not the same,\n\tthey behave the same way by returning basically\n\ttrue(non-zero) or false(0)\n");
	printf("\n");
	printf("\n");
	test_isalnum();
	printf("\n");
	printf("\n");
	test_isalpha();
	printf("\n");
	printf("\n");
	test_isdigit();
	printf("\n");
	printf("\n");
	test_isprint();
	printf("\n");
	printf("\n");
	test_isascii();
	printf("\n");
	printf("\n");
	test_tolower();
	printf("\n");
	printf("\n");
	test_toupper();
	printf("\n");
	printf("\n");
	test_strlen();
	printf("\n");
	printf("\n");
	test_strlcpy();
	printf("\n");
	printf("\n");
	test_strlcat();
	printf("\n");
	printf("\n");
	test_bzero();
	printf("\n");
	printf("\n");
	test_memset();
	printf("\n");
	printf("\n");
	test_memcpy();
	printf("\n");
	printf("\n");
	test_memmove();
	printf("\n");
	printf("\n");
	test_memchr();
	printf("\n");
	printf("\n");
	test_calloc();
	printf("\n");
	printf("\n");
	test_strnstr();
	printf("\n");
	printf("\n");
	test_strrchr();
	printf("\n");
	printf("\n");
	test_strchr();
	printf("\n");
	printf("\n");
	test_strdup();
	printf("\n");
	printf("\n");
	test_strncmp();
	printf("\n");
	printf("\n");
	test_memcmp();
	printf("\n");
	printf("\n");
	test_atoi();
	printf("\n\n   There's no C native functions of the functions\n        below, so the output is expected\n      according to the project description\n\n\n");
	test_substr();
	printf("\n");
	printf("\n");
	test_strjoin();
	printf("\n");
	printf("\n");
	test_ft_putchar_fd();
	printf("\n");
	printf("\n");
	test_ft_putstr_fd();
	printf("\n");
	printf("\n");
	test_ft_putendl_fd();
	printf("\n");
	printf("\n");
	test_ft_putnbr_fd();
	printf("\n");
	printf("\n");
	test_ft_itoa();
	printf("\n");
	printf("\n");
	test_ft_strmapi();
	printf("\n");
	printf("\n");
	test_ft_striteri();
	printf("\n");
	printf("\n");
	test_ft_strtrim();
	printf("\n");
	printf("\n");
	test_ft_split();
	printf("\n");
	printf("\n");

	return (0);
}
