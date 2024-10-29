/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:21 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/29 15:43:32 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char	ft_dest[20] = "Hello, ";
	char	dest[20] = "Hello, ";
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

	ft_bzero(ft_str + 7, 6);
	bzero(str + 7, 6);
	printf("ft_bzero: %s | bzero: %s\n", ft_str, str);
}

void	test_memset(void)
{
	char	ft_str[10] = "abcdefghi";
	char	str[10] = "abcdefghi";

	ft_memset(ft_str, 'X', 4);
	memset(str, 'X', 4);
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
	char	ft_str[20] = "abcdefghijkl";
	char	str[20] = "abcdefghijkl";

	ft_memmove(ft_str + 2, ft_str, 8);
	memmove(str + 2, str, 8);
	printf("ft_memmove: %s | memmove: %s\n", ft_str, str);
}

void	test_memchr(void)
{
	char	str[] = "abcdefghijkl";
	char	*ft_result;
	char	*result;

	ft_result = ft_memchr(str, 'd', 9);
	result = memchr(str, 'd', 9);
	printf("ft_memchr: %s | memchr: %s\n", ft_result, result);
}

void	test_calloc(void)
{
	int		*ft_arr;
	int		*arr;
	int		i;

	ft_arr = (int *)ft_calloc(5, sizeof(int));
	arr = (int *)calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("ft_calloc arr[%d]: %d | calloc arr[%d]: %d\n", i, ft_arr[i], i, arr[i]);
		i++;
	}
	free(ft_arr);
	free(arr);
}

void	test_strnstr(void)
{
	char	*big = "Hello there!";
	char	*little = "there";
	char	*ft_result = ft_strnstr(big, little, strlen(big));
	char	*result = strnstr(big, little, strlen(big));

	printf("ft_strnstr: %s | strnstr: %s\n", ft_result, result);
}

void	test_strrchr(void)
{
	char	str[] = "Hello, World!";
	char	*ft_result = ft_strrchr(str, 'o');
	char	*result = strrchr(str, 'o');

	printf("ft_strrchr: %s | strrchr: %s\n", ft_result, result);
}

void	test_strchr(void)
{
	char	str[] = "Hello, World!";
	char	*ft_result = ft_strchr(str, 'W');
	char	*result = strchr(str, 'W');

	printf("ft_strchr: %s | strchr: %s\n", ft_result, result);
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
	int		ft_cmp = ft_strncmp(s1, s2, 4);
	int		cmp = strncmp(s1, s2, 4);

	printf("ft_strncmp: %d | strncmp: %d\n", ft_cmp, cmp);
}

void	test_memcmp(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdep";
	int		ft_cmp = ft_memcmp(str1, str2, 6);
	int		cmp = memcmp(str1, str2, 6);

	printf("ft_memcmp: %d | memcmp: %d\n", ft_cmp, cmp);
}

void	test_atoi(void)
{
	char	*str = "   -42";
	int		ft_result = ft_atoi(str);
	int		result = atoi(str);

	printf("ft_atoi: %d | atoi: %d\n", ft_result, result);
}

void	test_substr(void)
{
	char const	*str = "teste123";
	
	printf("ft_substr: %s | expected: 123\n", ft_substr(str, 5, sizeof(str)));
}

void	test_strjoin(void)
{
	char const	*s1 = "abc";
	char const	*s2 = "def";

	printf("ft_strjoin: %s | expected: abcdef\n", ft_strjoin(s1, s2));
}

int	main(void)
{
	test_isalnum();
	printf("\n");
	test_isalpha();
	printf("\n");
	test_isdigit();
	printf("\n");
	test_isascii();
	printf("\n");
	test_isprint();
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
	printf("\n\nThere's no C functions of these functions below, so no comparison\n\n\n");
	test_substr();
	printf("\n");
	test_strjoin();
	
	return (0);
}
