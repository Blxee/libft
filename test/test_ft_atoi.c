#include "libft.h"

int test_ft_atoi(void)
{
	int result;

	result = 1;
	result *= ft_atoi("10") == 10;
	result *= ft_atoi("-9") == -9;
	result *= ft_atoi("0") == 0;
	result *= ft_atoi("    \f\t\v\r123") == 123;
	result *= ft_atoi("    \f\t\v\r-123") == -123;
	return (result);
}
