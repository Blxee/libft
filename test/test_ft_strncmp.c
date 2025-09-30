#include "libft.h"

int test_ft_strncmp(void)
{
	int result;

	result = 1;
	result *= ft_strncmp("", "", 0) == 0;
	result *= ft_strncmp("A", "A", 1) == 0;
	result *= ft_strncmp("Hello", "Hello", 5) == 0;
	result *= ft_strncmp("HellA", "HellB", 5) == -1;
	result *= ft_strncmp("HellB", "HellA", 10) == 1;
	result *= ft_strncmp("A", "B", 0) == 0;
	result *= ft_strncmp("a", "z", 0) == 0;
	result *= ft_strncmp("B", "A", 1) == 1;
	result *= ft_strncmp("z", "a", 1) == 25;
	return (result);
}
