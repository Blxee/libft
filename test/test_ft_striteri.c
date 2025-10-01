#include "libft.h"

static void add_idx(unsigned int i, char *ch)
{
	*ch += i;
}

int test_ft_striteri(void)
{
	static char str[] = "111";
	int result;

	result = 1;
	ft_striteri(str, &add_idx);
	result *= ft_strcmp(str, "123") == 0;
	return (result);
}
