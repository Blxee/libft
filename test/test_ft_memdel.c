
#include "libft.h"

int test_ft_memdel(void)
{
	int result;
	void *ptr;

	result = 1;
	ptr = malloc(1);
	ft_memdel(&ptr);
	result *= ptr == NULL;
	return (result);
}
