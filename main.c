/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:21 by paude-so          #+#    #+#             */
/*   Updated: 2024/11/04 12:16:01 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <bsd/string.h>

typedef struct	s_function_list
{
    const char	*name;
    void		(*func)();
}				t_function_list;

void	test_isalpha(void)
{
	printf("\t\t----ft_isalpha----\n\n");
	char	c = 'a';
	char	a = '9';
	printf("  Test 1: \"%c\"\n  ft_isalpha: \"%d\"\n  isalpha: \"%d\"\n\n  Test 2: \"%c\"\n  ft_isalpha: \"%d\"\n  isalpha: \"%d\"\n", c, ft_isalpha(c), isalpha(c), a, ft_isalpha(a), isalpha(a));
}

void	test_isdigit(void)
{
	printf("\t\t----ft_isdigit----\n\n");
	char	c = '5';
	char	a = 'a';
	printf("  Test 1: \"%c\"\n  ft_isdigit: \"%d\"\n  isdigit: \"%d\"\n\n  Test 2: \"%c\"\n  ft_isdigit: \"%d\"\n  isdigit: \"%d\"\n", c, ft_isdigit(c), isdigit(c), a, ft_isdigit(a), isdigit(a));
}

void	test_isalnum(void)
{
	printf("\t\t----ft_isalnum----\n\n");
	char	c = 'A';
	char	a = '%';
	printf("  Test 1: \"%c\"\n  ft_isalnum: \"%d\"\n  isalnum: \"%d\"\n\n  Test 2: \"%c\"\n  ft_isalnum: \"%d\"\n  isalnum: \"%d\"\n", c, ft_isalnum(c), isalnum(c), a, ft_isalnum(a), isalnum(a));
}

void	test_isascii(void)
{
	printf("\t\t----ft_isascii----\n\n");
	char	c = 'A';
	unsigned char	a = 130;
	
	printf("  Test 1: \"%c\"\n  ft_isascii: \"%d\"\n  isascii: \"%d\"\n\n  Test 2: \"%c\"\n  ft_isascii: \"%d\"\n  isascii: \"%d\"\n", c, ft_isascii(c), isascii(c), a, ft_isascii(a), isascii(a));
}

void	test_isprint(void)
{
	printf("\t\t----ft_isprint----\n\n");
	char	c = 'A';
	char	a = 3;

	printf("  Test 1: \"%c\"\n  ft_isprint: \"%d\"\n  isprint: \"%d\"\n\n  Test 2: \"%c\"\n  ft_isprint: \"%d\"\n  isprint: \"%d\"\n", c, ft_isprint(c), isprint(c), a, ft_isprint(a), isprint(a));
}

void	test_strlen(void)
{
	char	str1[] = "Hello, World!";

	printf("ft_strlen: \"%zu\" | strlen: \"%zu\"\n", ft_strlen(str1), strlen(str1));
}

void	test_memset(void)
{
	char	ft_str[] = "abcdefghi";
	char	str[] = "abcdefghi";

	ft_memset(ft_str, 'Z', 4);
	memset(str, 'Z', 4);
	printf("ft_memset: \"%s\" | memset: \"%s\"\n", ft_str, str);
}

void	test_bzero(void)
{
	printf("\t\t----ft_bzero----\n\n");
	char	ft_str[] = "Hello, World!";
	char	str[] = "Hello, World!";
	size_t	n = 2;

	printf("  Before ft_bzero: \"%s\"\n  Before bzero: \"%s\"\n  Max bzeroing: \"%zu\"\n\n", ft_str, str, n);
	ft_bzero(ft_str, n);
	bzero(str, n);
	printf("  After ft_bzero: \"%s\"\n  After bzero: \"%s\"\n", ft_str + n, str + n);
}

void	test_memcpy(void)
{
	printf("\t\t----ft_memcpy----\n\n");
	char	ft_dest[] = "0123456789";
	char	dest[] = "0123456789";
	char	src[] = "Hello";
	size_t	n = 4;

	printf("  Source: \"%s\" | Max length: \"%zu\"\n  Dest before ft_memcpy: \"%s\"\n  Dest before memcpy: \"%s\"\n\n", src, n, ft_dest, dest);
	ft_memcpy(ft_dest, src, n);
	memcpy(dest, src, n);
	printf("  Dest after ft_memcpy: \"%s\"\n  Dest after memcpy: \"%s\"\n",ft_dest, dest);
}

void	test_memmove(void)
{
	printf("\t\t----ft_memmove----\n\n");
	char	ft_str[] = "rem ipssum dolor sit amet";
	char	str[] = "rem ipssum dolor sit amet";
	char	*ft_dest = ft_calloc((sizeof(ft_str) + 1), sizeof(char));
	char	*dest = ft_calloc((sizeof(str) + 1), sizeof(char));
	size_t	n = 3;
	
	ft_memmove(ft_dest, ft_str, n);
	memmove(dest, str, n);

	printf("  Source ft: \"%s\"\n  Source oiginal: \"%s\"\n  Max Length: \"%zu\"\n\n  Dest after ft_memmove: \"%s\"\n  Dest after memmove: \"%s\"\n", ft_str, str, n, ft_dest, dest);
}

void	test_strlcpy(void)
{
	printf("\t\t----ft_strlcpy----\n\n");
	const char	*src = "Hello, World!";
	char		*ft_dest = ft_calloc(sizeof(*src) + 1, sizeof(char));
	char		*dest = ft_calloc(sizeof(*src) + 1, sizeof(char));
	size_t		n = 14;
	size_t		ft = ft_strlcpy(ft_dest, src, n);
	size_t		orig = strlcpy(dest, src, n);
	
	printf("  Source \"%s\"\n  Dest ft_strlcat: \"%s\"\n  Dest strlcat: \"%s\"\n  ft_strlcat return: \"%zu\" | strlcat return: \"%zu\"\n", src, ft_dest, dest, ft, orig);
}

void	test_strlcat(void)
{
	printf("\t\t----ft_strlcat----\n\n");
	char		ft_dest[20] = "Hello, ";
	char		dest[20] = "Hello, ";
	const char	*ft_src = "World!";
	const char	*src = "World!";
	size_t		n = 14;
	size_t		ft = ft_strlcat(ft_dest, ft_src, n);
	size_t		orig = strlcat(dest, src, n);

	printf("  Source ft_src: \"%s\" | Source src: \"%s\"\n  Dest ft_strlcat: \"%s\"\n  Dest strlcat: \"%s\"\n  ft_strlcat return: \"%zu\" | strlcat return: \"%zu\"\n", ft_src, src, ft_dest, dest, ft, orig);
}

void	test_toupper(void)
{
	printf("\t\t----ft_toupper----\n\n");
	char	c = 'a';
	char	a = '%';
	printf("  Test 1: \"%c\"\n  ft_toupper: \"%c\"\n  toupper: \"%c\"\n\n  Test 2: \"%c\"\n  ft_toupper: \"%c\"\n  toupper: \"%c\"\n", c, ft_toupper(c), toupper(c), a, ft_toupper(a), toupper(a));
}

void	test_tolower(void)
{
	printf("\t\t----ft_tolower----\n\n");
	char	c = 'A';
	char	a = 'b';
	printf("  Test 1: \"%c\"\n  ft_tolower: \"%c\"\n  tolower: \"%c\"\n\n  Test 2: \"%c\"\n  ft_tolower: \"%c\"\n  tolower: \"%c\"\n", c, ft_tolower(c), tolower(c), a, ft_tolower(a), tolower(a));
}

void	test_strchr(void)
{
	printf("\t\t----ft_strchr----\n\n");
	char	str[] = "Hello, World!";
	char	c = 'o';

	printf("  String: \"%s\" | First char: \"%c\"\n  ft_strchr: \"%s\"\n  strchr: \"%s\"\n", str, c, ft_strchr(str, c), strchr(str, c));
}

void	test_strrchr(void)
{
	printf("\t\t----ft_strrchr----\n\n");
	char	str[] = "Hello, World!";
	char	c = 'l';

	printf("  String: \"%s\" | Last char: \"%c\"\n  ft_strrchr: \"%s\"\n  strrchr: \"%s\"\n", str, c, ft_strrchr(str, c), strrchr(str, c));
}

void	test_strncmp(void)
{
	printf("\t\t----ft_strncmp----\n\n");
	char	*s1 = "Hello";
	char	*s2 = "Helto";
	size_t	n = 4;

	printf("  String1: \"%s\" | String2: \"%s\"\n  Max i to compare: \"%zu\"\n  ft_strncmp: \"%d\"\n  strncmp: \"%d\"\n", s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

void	test_memchr(void)
{
	printf("\t\t----ft_memchr----\n\n");
	char	*str = "abcdefghijkl";
	char	c = 'd';
	size_t	n = 6;
	
	printf("  String: \"%s\" | First ocurrence: \"%c\"\n  ft_memchr: \"%s\" | memchr: \"%s\"\n", str, c, (char *)ft_memchr(str, c, n), (char *)memchr(str, c, n));
}

void	test_memcmp(void)
{
	printf("\t\t----ft_memcmp----\n\n");
	char	str1[] = "abcdef";
	char	str2[] = "abcDef";
	size_t	n = 6;

	printf("  String1: \"%s\" | String2: \"%s\"\n  Max i to compare: \"%zu\"\n  ft_memcmp: \"%d\"\n  memcmp: \"%d\"\n",str1, str2, n, ft_memcmp(str1, str2, n), memcmp(str1, str2, n));
}

void	test_strnstr(void)
{
	printf("\t\t----ft_strnstr----\n\n");
	char	*big = "Hello there!";
	char	*little = "t";
	size_t	len = 12;

	printf("  Big: \"%s\" | Little: \"%s\"\n  Max search: \"%zu\"\n  ft_strnstr: \"%s\"\n  strnstr: \"%s\"\n", big, little, len, ft_strnstr(big, little, len), strnstr(big, little, len));
}

void	test_atoi(void)
{
	printf("\t\t----ft_atoi----\n\n");
	char	*str = "   -42";

	printf("  Test string: \"%s\"\n  ft_atoi: \"%d\"\n  atoi: \"%d\"\n", str, ft_atoi(str), atoi(str));
}


void	test_calloc(void)
{
	printf("\t\t----ft_calloc----\n\n");
	size_t	n = 5;
	char	*arr_ft = "ABC";
	char	*arr = "ABC";
	
	printf("  arr_ft before ft_calloc: \"%s\" | arr before calloc: \"%s\"\n", arr_ft, arr);
	arr_ft = ft_calloc(n, sizeof(char));
	arr = calloc(n, sizeof(char));
	printf("  arr_ft after ft_calloc: \"%s\"    | arr after calloc: \"%s\"\n", arr_ft, arr);
}

void	test_strdup(void)
{
	printf("\t\t----ft_strdup----\n\n");
	char	*str = "Hello, World!";
	char	*ft_dup = ft_strdup(str);
	if (!ft_dup)
		return ;
	char	*dup = strdup(str);
	if (!dup)
	{
		free(ft_dup);
		return ;
	}

	printf("  Source string: \"%s\"\n  ft_strdup: \"%s\"\n  strdup: \"%s\"\n", str, ft_dup, dup);
	free(ft_dup);
	free(dup);
}

void	test_substr(void)
{
	printf("\t\t----ft_substr----\n\n");
	char const		*str = "teste123";
	unsigned int	start = 5;
	size_t			max = 2;
	
	printf("  Input string: \"%s\"\n  Start at char: \"%d\" | Max length of: \"\"%zu\n  After ft_substr: \"%s\"\n", str, start, max, ft_substr(str, start, max));
}

void	test_strjoin(void)
{
	printf("\t\t----ft_strjoin----\n\n");
	char const	*s1 = "abc";
	char const	*s2 = "def";

	printf("  String 1: \"%s\" | String 2: \"%s\"\n  After ft_strjoin: \"%s\"\n", s1, s2, ft_strjoin(s1, s2));
}

void	test_ft_strtrim(void)
{
	char	*str = "aaaiiiaaiaMy name is Giovanni Giorgioiiaaiaiaiaaii";
	char	*trim = "ai";
	printf("\t\t----ft_strtrim----\n\n");
	printf("  Original string: \"%s\"\n  To be trimmed with: \"%s\"\n  After ft_strtrim: \"%s\"\n",str, trim, ft_strtrim(str, trim));
}

void	test_ft_split(void)
{
	char	*str = "My name is Giovanni Giorgio but everybody calls me Giorgio";
	char	c = ' ';
	char	**result = ft_split(str, c);
	char	**start = result;
	
	printf("\t\t----ft_split----\n\n");
	printf("  Original string: \"%s\"\n  Separator: \"%c\"\n  Output:\n", str, c);
	if (!result)
		return ;
	while(*result)
	{
		printf("           \"%s\"\n", *result);
		free(*result);
		result++;
	}
	free(start);
}

void	test_ft_itoa(void)
{
	printf("\t\t----ft_itoa----\n\n");
	int	nb1 = -2147483648;
	printf("  Integer: \"%d\" | Output ft_itoa: \"%s\"\n", nb1, ft_itoa(nb1));
	int	nb2 = 0;
	printf("  Integer: \"%d\" | Output ft_itoa: \"%s\"\n", nb2, ft_itoa(nb2));
	int	nb3 = 2147483647;
	printf("  Integer: \"%d\" | Output ft_itoa: \"%s\"\n", nb3, ft_itoa(nb3));
}

char custom_toupper(unsigned int i, char c)
{
    (void)i;
    return ft_toupper(c);
}

void	test_ft_strmapi(void)
{
	char	*str = "abc";
	printf("\t\t----ft_strmapi----\n\n");
	printf("  Original string: \"%s\"", str);
	printf("  After ft_strmapi: \"%s\"\n", ft_strmapi(str, custom_toupper));
}

void custom_tolower(unsigned int i, char *c)
{
    (void)i;
    c[0] = ft_tolower(c[0]);
}

void	test_ft_striteri(void)
{
	char	str[] = "ABC";
	printf("\t\t----ft_striteri----\n\n");
	printf("  Original string: \"%s\"", str);
	ft_striteri(str, custom_tolower);
	printf("  After ft_striteri: \"%s\"\n", str);
	
}

void	test_ft_putchar_fd(void)
{
	printf("\t\t----ft_putchar_fd----\n\n");
	char	c = 'A';
	printf("  With printf: \"%c\"\n  With ft_putchar_fd: \"", c);
	fflush(stdout);
	ft_putchar_fd(c, 1);
	printf("\"\n");
}

void	test_ft_putstr_fd(void)
{
	printf("\t\t----ft_putstr_fd----\n\n");
	char	*str = "But everybody calls me Giorgio";
	
	printf("  With printf: \"%s\"\n  With ft_putstr_fd: \"", str);
	fflush(stdout);
	ft_putstr_fd(str, 1);
	printf("\"\n");
}
void	test_ft_putendl_fd(void)
{
	printf("\t\t----ft_putendl_fd----\n");
	char	*str = "But everybody calls me Giorgio";
	printf("  With printf: \"%s\"\n  With ft_putendl_fd: \"", str);
	fflush(stdout);
	ft_putendl_fd(str, 1);
	printf("\"");
}

void	test_ft_putnbr_fd(void)
{
	printf("\t\t----ft_putnbr_fd----\n\n");
	int	n = -85730;
	printf("  Integer: \"%d\"\n  Output ft_puntbr_fd: \"", n);
	fflush(stdout);
	ft_putnbr_fd(n, 1);
	printf("\"\n");
}

void	test_ft_lstnew(void)
{
	printf("\t\t----ft_lstnew----\n\n");
	int *value = ft_calloc(1, sizeof(int));
	*value = 42;
	t_list *node = ft_lstnew(value);
	
	if (node)
		printf("  Content of the new node: %d\n  Next pointer of the new node: %s\n", *(int *)node->content, node->next ? "Not NULL" : "NULL");
	else
		printf("  Failed to create new node.\n");
	free(value);
	free(node);
}

void	run_all_tests(void)
{
	printf("\n\n\t\t\t  Tests bellow\n\n\n");
	printf("\t\t\t\t|\n\t\t\t\t|\n\t\t\t\t|\n    The output of isalnum, isalpha, isdigit, and isprint are\n    different from mine because the standard library returns\n      a non-zero value or 0, so even though the outputs are\n          not the same, they behave the same way by\n       returning basically true(non-zero) or false(0)\n\t\t\t\t|\n\t\t\t\t|\n\t\t\t\t|\n");
	printf("\n\n");
	test_isalpha();
	printf("\n\n");
	test_isdigit();
	printf("\n\n");
	test_isalnum();
	printf("\n\n");
	test_isascii();
	printf("\n\n");
	test_isprint();
	printf("\n\n");
	test_strlen();
	printf("\n\n");
	test_memset();
	printf("\n\n");
	test_bzero();
	printf("\n\n");
	test_memcpy();
	printf("\n\n");
	test_memmove();
	printf("\n\n");
	test_strlcpy();
	printf("\n\n");
	test_strlcat();
	printf("\n\n");
	test_toupper();
	printf("\n\n");
	test_tolower();
	printf("\n\n");
	test_strchr();
	printf("\n\n");
	test_strrchr();
	printf("\n\n");
	test_strncmp();
	printf("\n\n");
	test_memchr();
	printf("\n\n");
	test_memcmp();
	printf("\n\n");
	test_strnstr();
	printf("\n\n");
	test_atoi();
	printf("\n\n");
	test_calloc();
	printf("\n\n");
	test_strdup();
	printf("\n\n");
	printf("\t\t\t|\n\t\t\t|\n\t\t\t|\n    There's no C native functions of the functions\n        below, so the output is expected\n      according to the project description\n\t\t\t|\n\t\t\t|\n\t\t\t|\n");
	printf("\n\n");
	test_substr();
	printf("\n\n");
	test_strjoin();
	printf("\n\n");
	test_ft_strtrim();
	printf("\n\n");
	test_ft_split();
	printf("\n\n");
	test_ft_itoa();
	printf("\n\n");
	test_ft_strmapi();
	printf("\n\n");
	test_ft_striteri();
	printf("\n\n");
	test_ft_putchar_fd();
	printf("\n\n");
	test_ft_putstr_fd();
	printf("\n\n");
	test_ft_putendl_fd();
	printf("\n\n");
	test_ft_putnbr_fd();
	printf("\n\n");
	test_ft_lstnew();
	printf("\n\n");
	
}

int main(int argc, char *argv[])
{
	size_t	num_functions;
	size_t	i;
	
    if (argc != 2)
	{
        printf("Usage:\n  %s [function_name (without ft_)]\n  %s all to test everything\n", argv[0], argv[0]);
		return (0);
    }
	else
	{
		t_function_list functions[] = {
			{"all", run_all_tests},
			{"isalpha", test_isalpha},
			{"isdigit", test_isdigit},
			{"isalnum", test_isalnum},
			{"isascii", test_isascii},
			{"isprint", test_isprint},
			{"strlen", test_strlen},
			{"memset", test_memset},
			{"bzero", test_bzero},
			{"memcpy", test_memcpy},
			{"memmove", test_memmove},
			{"strlcpy", test_strlcpy},
			{"strlcat", test_strlcat},
			{"toupper", test_toupper},
			{"tolower", test_tolower},
			{"strchr", test_strchr},
			{"strrchr", test_strrchr},
			{"strncmp", test_strncmp},
			{"memchr", test_memchr},
			{"memcmp", test_memcmp},
			{"strnstr", test_strnstr},
			{"atoi", test_atoi},
			{"calloc", test_calloc},
			{"strdup", test_strdup},
			{"substr", test_substr},
			{"strjoin", test_strjoin},
			{"strtrim", test_ft_strtrim},
			{"split", test_ft_split},
			{"itoa", test_ft_itoa},
			{"strmapi", test_ft_strmapi},
			{"striteri", test_ft_striteri},
			{"putchar_fd", test_ft_putchar_fd},
			{"putstr_fd", test_ft_putstr_fd},
			{"putendl_fd", test_ft_putendl_fd},
			{"putnbr_fd", test_ft_putnbr_fd},
			{"lstnew", test_ft_lstnew}
		};
        num_functions = sizeof(functions) / sizeof(functions[0]);
		i = 0;
        while (i < num_functions)
		{
            if (ft_strncmp(argv[1], functions[i].name, 10) == 0)
			{
                functions[i].func();
                return (0);
            }
			i++;
        }
        printf("%s not found!\n", argv[1]);
        return (0);
    }

    return (0);
}
