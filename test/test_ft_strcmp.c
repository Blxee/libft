#include "libft.h"

int test_ft_strcmp(void)
{
	int result;

	result = 1;
	result *= ft_strcmp("", "") == 0;
	result *= ft_strcmp("A", "A") == 0;
	result *= ft_strcmp("Hello", "Hello") == 0;
	result *= ft_strcmp("HellA", "HellB") == -1;
	result *= ft_strcmp("HellB", "HellA") == 1;
	result *= ft_strcmp("A", "B") == -1;
	result *= ft_strcmp("a", "z") == -25;
	result *= ft_strcmp("B", "A") == 1;
	result *= ft_strcmp("z", "a") == 25;
	return (result);
}
