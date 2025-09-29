#include "libft.h"

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

int test_ft_strlen()
{
	int result;

	result = 1;
	result *= ft_strlen("A") == 1;
	result *= ft_strlen("") == 0;
	result *= ft_strlen("Hello") == 5;
	return (result);
}


int test_ft_isalpha(void)
{
	int result;

	result = 1;
	result *= ft_isalpha('A') == 1;
	result *= ft_isalpha('N') == 1;
	result *= ft_isalpha('Z') == 1;
	result *= ft_isalpha('a') == 1;
	result *= ft_isalpha('n') == 1;
	result *= ft_isalpha('z') == 1;
	result *= ft_isalpha('1') == 0;
	result *= ft_isalpha('!') == 0;
	return (result);
}

int test_ft_isdigit(void)
{
	int result;

	result = 1;
	result *= ft_isdigit('0') == 1;
	result *= ft_isdigit('5') == 1;
	result *= ft_isdigit('9') == 1;
	result *= ft_isdigit('~') == 0;
	result *= ft_isdigit('A') == 0;
	result *= ft_isdigit('n') == 0;
	return (result);
}

int test_ft_isalnum(void)
{
	int result;

	result = 1;
	result *= ft_isalnum('A') == 1;
	result *= ft_isalnum('N') == 1;
	result *= ft_isalnum('Z') == 1;
	result *= ft_isalnum('a') == 1;
	result *= ft_isalnum('n') == 1;
	result *= ft_isalnum('z') == 1;
	result *= ft_isalnum('0') == 1;
	result *= ft_isalnum('5') == 1;
	result *= ft_isalnum('9') == 1;
	result *= ft_isalnum(' ') == 0;
	result *= ft_isalnum('%') == 0;
	result *= ft_isalnum('!') == 0;
	result *= ft_isalnum('\n') == 0;
	return (result);
}

int test_ft_toupper(void)
{
	int result;

	result = 1;
	result *= ft_toupper('a') == 'A';
	result *= ft_toupper('n') == 'N';
	result *= ft_toupper('z') == 'Z';
	result *= ft_toupper('A') == 'A';
	result *= ft_toupper('N') == 'N';
	result *= ft_toupper('Z') == 'Z';
	result *= ft_toupper('$') == '$';
	result *= ft_toupper(' ') == ' ';
	return (result);
}

int test_ft_tolower(void)
{
	int result;

	result = 1;
	result *= ft_tolower('A') == 'a';
	result *= ft_tolower('N') == 'n';
	result *= ft_tolower('Z') == 'z';
	result *= ft_tolower('a') == 'a';
	result *= ft_tolower('n') == 'n';
	result *= ft_tolower('z') == 'z';
	result *= ft_tolower('$') == '$';
	result *= ft_tolower(' ') == ' ';
	return (result);
}



int test_ft_putchar()
{
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
	return (1);
}

int test_ft_putstr()
{
	ft_putstr("Hello, World!\n");
	return (1);
}

int main(void)
{

	run_test(test_ft_putchar, "ft_putchar");
	run_test(test_ft_putstr, "ft_putstr");
	run_test(test_ft_strlen, "ft_strlen");
	run_test(test_ft_isalpha, "ft_isalpha");
	run_test(test_ft_isdigit, "ft_isdigit");
	run_test(test_ft_isalnum, "ft_isalnum");
	run_test(test_ft_toupper, "ft_toupper");
	run_test(test_ft_tolower, "ft_tolower");
	return (0);
}
