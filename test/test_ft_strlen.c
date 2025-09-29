#include "libft.h"

int test_ft_strlen()
{
	int result;

	result = 1;
	result *= ft_strlen("A") == 1;
	result *= ft_strlen("") == 0;
	result *= ft_strlen("Hello") == 5;
	return (result);
}
