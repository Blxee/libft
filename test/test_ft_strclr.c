#include "libft.h"

int test_ft_strclr(void)
{
	static char str[] = "Hello";
	int result;

	result = 1;
	ft_strclr(str);
	result *= ft_strlen(str) == 0;
	return (result);
}
