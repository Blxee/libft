#include "libft.h"

static void add_one(char *ch)
{
	*ch += 1;
}

int test_ft_striter(void)
{
	static char str[] = "123";
	int result;

	result = 1;
	ft_striter(str, &add_one);
	result *= ft_strcmp(str, "234") == 0;
	return (result);
}
