#include "libft.h"

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
