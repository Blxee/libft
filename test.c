/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:14:00 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/16 16:43:55 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "castrum.h"
#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

void test_ft_isalpha()
{
	ASSERT_TRUE(ft_isalpha('a'));
	ASSERT_TRUE(ft_isalpha('n'));
	ASSERT_TRUE(ft_isalpha('z'));
	ASSERT_TRUE(ft_isalpha('A'));
	ASSERT_TRUE(ft_isalpha('N'));
	ASSERT_TRUE(ft_isalpha('Z'));
	ASSERT_FALSE(ft_isalpha('0'));
	ASSERT_FALSE(ft_isalpha('\0'));
	ASSERT_FALSE(ft_isalpha('\n'));
	ASSERT_FALSE(ft_isalpha('!'));
	ASSERT_FALSE(ft_isalpha('@'));
}

void test_ft_isdigit()
{
	ASSERT_TRUE(ft_isdigit('0'));
	ASSERT_TRUE(ft_isdigit('5'));
	ASSERT_TRUE(ft_isdigit('9'));
	ASSERT_FALSE(ft_isdigit('a'));
	ASSERT_FALSE(ft_isdigit('$'));
	ASSERT_FALSE(ft_isdigit('*'));
	ASSERT_FALSE(ft_isdigit('Z'));
	ASSERT_FALSE(ft_isdigit('\0'));
	ASSERT_FALSE(ft_isdigit('\n'));
}

void test_ft_atoi(void)
{
	ASSERT_EQ(ft_atoi("12"), atoi("12"));
	ASSERT_EQ(ft_atoi("0"), atoi("0"));
	ASSERT_EQ(ft_atoi("-123"), atoi("-123"));
	ASSERT_EQ(ft_atoi("-0"), atoi("-0"));
	ASSERT_EQ(ft_atoi("abc"), atoi("abc"));
	ASSERT_EQ(ft_atoi("\t\t   123abc"), atoi("\t\n   123abc"));
	ASSERT_EQ(ft_atoi(""), atoi(""));
	ASSERT_EQ(ft_atoi("-+123"), atoi("-+123"));
	ASSERT_EQ(ft_atoi("+123"), atoi("+123"));
}

void test_ft_bzero(void)
{

}

void test_ft_calloc(void)
{
	void *ours = calloc(5, sizeof(char));
	void *theirs = ft_calloc(5, sizeof(char));
	ASSERT_ARR_EQ(ours, theirs, 5);
	free(ours);
	free(theirs);
}

void test_ft_isalnum(void)
{
	ASSERT_EQ(ft_isalnum('a'), isalnum('a'));
	ASSERT_EQ(ft_isalnum('Z'), isalnum('Z'));
	ASSERT_EQ(ft_isalnum('1'), isalnum('1'));
	ASSERT_EQ(ft_isalnum('%'), isalnum('%'));
	ASSERT_EQ(ft_isalnum('0'), isalnum('0'));
	ASSERT_EQ(ft_isalnum('9'), isalnum('9'));
	ASSERT_EQ(ft_isalnum('!'), isalnum('!'));
	ASSERT_EQ(ft_isalnum('\n'), isalnum('\n'));
	ASSERT_EQ(ft_isalnum('\0'), isalnum('\0'));
}

void test_ft_isascii(void)
{
	ASSERT_EQ(ft_isascii('a'), isascii('a'));
	ASSERT_EQ(ft_isascii('z'), isascii('z'));
	ASSERT_EQ(ft_isascii('\0'), isascii('\0'));
	ASSERT_EQ(ft_isascii(127), isascii(127));
	ASSERT_EQ(ft_isascii(128), isascii(128));
	ASSERT_EQ(ft_isascii(9999), isascii(9999));
	ASSERT_EQ(ft_isascii(-1), isascii(-1));
	ASSERT_EQ(ft_isascii(-128), isascii(-128));
	ASSERT_EQ(ft_isascii(-129), isascii(-129));
	ASSERT_EQ(ft_isascii(-9999), isascii(-9999));
}

void test_ft_isprint(void)
{
	ASSERT_EQ(ft_isprint('a'), isprint('a'));
}

void test_ft_itoa(void)
{
}

void test_ft_lstadd_back(void)
{

}

void test_ft_lstadd_front(void)
{

}

void test_ft_lstclear(void)
{

}

void test_ft_lstdelone(void)
{

}

void test_ft_lstiter(void)
{

}

void test_ft_lstlast(void)
{

}

void test_ft_lstmap(void)
{

}

void test_ft_lstnew(void)
{

}

void test_ft_lstsize(void)
{

}

void test_ft_memchr(void)
{
	ASSERT_EQ(ft_memchr("cbafgh", 'a', 6), memchr("cbafgh", 'a', 6));
	ASSERT_EQ(ft_memchr("cbafgh", 'z', 6), memchr("cbafgh", 'z', 6));
	ASSERT_EQ(ft_memchr("cbafgh", 'h', 3), memchr("cbafgh", 'h', 3));
	ASSERT_EQ(ft_memchr("cbafgh", 'f', 3), memchr("cbafgh", 'f', 3));
	ASSERT_EQ(ft_memchr("cbafgh", 'a', 3), memchr("cbafgh", 'a', 3));
	ASSERT_EQ(ft_memchr("cbafgh", 'a', 0), memchr("cbafgh", 'a', 0));
	ASSERT_EQ(ft_memchr(NULL, 'a', 0), memchr(NULL, 'a', 0));
}

void test_ft_memcmp(void)
{
	char *mem1, *mem2;
	size_t n;

	mem1 = "abc";
	mem2 = "abc";
	n = 3;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "abcde";
	n = 3;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "def";
	n = 3;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "def";
	n = 0;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "abc";
	n = 0;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "abc";
	n = 9;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));

	mem1 = "abc";
	mem2 = "def";
	n = 9;
	ASSERT_EQ(ft_memcmp(mem1, mem2, n), memcmp(mem1, mem2, n));
}

void test_ft_memcpy(void)
{
	char *target;
	char mem1[32];
	char mem2[32];
	void *ret1;
	void *ret2;


	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memcpy(mem1, target, 5);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memcpy(mem2, target, 5);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);

	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memcpy(mem1, target, 3);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memcpy(mem2, target, 3);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);

	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memcpy(mem1, target, 0);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memcpy(mem2, target, 0);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);
}

void test_ft_memmove(void)
{
	char *target;
	char mem1[32];
	char mem2[32];
	void *ret1;
	void *ret2;


	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memmove(mem1, target, 5);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memmove(mem2, target, 5);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);

	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memmove(mem1, target, 3);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memmove(mem2, target, 3);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);

	bzero(mem1, 32);
	bzero(mem2, 32);
	target = "hello";
	ret1 = ft_memmove(mem1, target, 0);
	ASSERT_EQ(ret1, (void*)mem1);
	ret2 = memmove(mem2, target, 0);
	ASSERT_EQ(ret2, (void*)mem2);
	ASSERT_STR_EQ(mem1, mem2);
}

void test_ft_memset(void)
{

}

void test_ft_putchar_fd(void)
{

}

void test_ft_putendl_fd(void)
{

}

void test_ft_putnbr_fd(void)
{

}

void test_ft_putstr_fd(void)
{

}

void test_ft_split(void)
{

}

void test_ft_strchr(void)
{

}

void test_ft_strdup(void)
{

}

void test_ft_striteri(void)
{

}

void test_ft_strjoin(void)
{

}

void test_ft_strlcat(void)
{

}

void test_ft_strlcpy(void)
{

}

void test_ft_strlen(void)
{

}

void test_ft_strmapi(void)
{

}

void test_ft_strncmp(void)
{

}

void test_ft_strnstr(void)
{

}

void test_ft_strrchr(void)
{

}

void test_ft_strtrim(void)
{

}

void test_ft_substr(void)
{

}

void test_ft_tolower(void)
{

}

void test_ft_toupper(void)
{

}


int main(void)
{
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_atoi);
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_calloc);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_itoa);
	RUN_TEST(test_ft_lstadd_back);
	RUN_TEST(test_ft_lstadd_front);
	RUN_TEST(test_ft_lstclear);
	RUN_TEST(test_ft_lstdelone);
	RUN_TEST(test_ft_lstiter);
	RUN_TEST(test_ft_lstlast);
	RUN_TEST(test_ft_lstmap);
	RUN_TEST(test_ft_lstnew);
	RUN_TEST(test_ft_lstsize);
	RUN_TEST(test_ft_memchr);
	RUN_TEST(test_ft_memcmp);
	RUN_TEST(test_ft_memcpy);
	RUN_TEST(test_ft_memmove);
	RUN_TEST(test_ft_memset);
	RUN_TEST(test_ft_putchar_fd);
	RUN_TEST(test_ft_putendl_fd);
	RUN_TEST(test_ft_putnbr_fd);
	RUN_TEST(test_ft_putstr_fd);
	RUN_TEST(test_ft_split);
	RUN_TEST(test_ft_strchr);
	RUN_TEST(test_ft_strdup);
	RUN_TEST(test_ft_striteri);
	RUN_TEST(test_ft_strjoin);
	RUN_TEST(test_ft_strlcat);
	RUN_TEST(test_ft_strlcpy);
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_strmapi);
	RUN_TEST(test_ft_strncmp);
	RUN_TEST(test_ft_strnstr);
	RUN_TEST(test_ft_strrchr);
	RUN_TEST(test_ft_strtrim);
	RUN_TEST(test_ft_substr);
	RUN_TEST(test_ft_tolower);
	RUN_TEST(test_ft_toupper);
}
