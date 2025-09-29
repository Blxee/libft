#include "libft.h"

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
