#include "libft.h"

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
