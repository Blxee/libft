#include "libft.h"

int test_ft_memset(void)
{
	static char mem[] = "Hello";
	int result;
	int i;

	result = 1;
	ft_memset(mem, 'A', 3);
	i = 0;
	while (i < 5)
	{
		result *= mem[i] == "AAAlo"[i];
		i++;
	}
	return (result);
}
