#include "libft.h"

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
