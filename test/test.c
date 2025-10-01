#include "libft.h"
#include "test.h"

static int run_test(int (*test)(void), char * name) {
	int result;

	result = test();
	if (result)
		ft_putstr("\x1b[42;30mSUCESS");
	else
		ft_putstr("\x1b[41m FAIL ");
	ft_putstr("\x1b[0m");
	ft_putchar(' ');
	ft_putstr(name);
	ft_putchar('\n');
	return (result);
}

int main(void)
{
	run_test(test_ft_strlen, "ft_strlen");
	run_test(test_ft_isalpha, "ft_isalpha");
	run_test(test_ft_isdigit, "ft_isdigit");
	run_test(test_ft_isalnum, "ft_isalnum");
	run_test(test_ft_isprint, "ft_isprint");
	run_test(test_ft_toupper, "ft_toupper");
	run_test(test_ft_tolower, "ft_tolower");
	run_test(test_ft_strcmp, "ft_strcmp");
	run_test(test_ft_strncmp, "ft_strncmp");
	run_test(test_ft_memset, "ft_memset");
	run_test(test_ft_atoi, "ft_atoi");
	run_test(test_ft_memdel, "ft_memdel");
	run_test(test_ft_strdel, "ft_strdel");
	run_test(test_ft_strclr, "ft_strclr");
	run_test(test_ft_striter, "ft_striter");
	return (0);
}
