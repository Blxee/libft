
#include "libft.h"

int test_ft_strdel(void)
{
	int result;
	char *ptr;

	result = 1;
	ptr = malloc(1);
	ft_strdel(&ptr);
	result *= ptr == NULL;
	return (result);
}
