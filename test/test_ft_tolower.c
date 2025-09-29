#include "libft.h"

int test_ft_tolower(void)
{
	int result;

	result = 1;
	result *= ft_tolower('A') == 'a';
	result *= ft_tolower('N') == 'n';
	result *= ft_tolower('Z') == 'z';
	result *= ft_tolower('a') == 'a';
	result *= ft_tolower('n') == 'n';
	result *= ft_tolower('z') == 'z';
	result *= ft_tolower('$') == '$';
	result *= ft_tolower(' ') == ' ';
	return (result);
}
