#include "libft.h"

#define TRUE (1)
#define FALSE (0)

typedef int bool;

bool test_ft_strlen()
{
	if (ft_strlen("A") != 1
	    || ft_strlen("") != 0
			|| ft_strlen("Hello") != 5)
		return (FALSE);
	return (TRUE);
}

bool test_ft_putchar()
{
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
	return (TRUE);
}

bool test_ft_putstr()
{
	ft_putstr("Hello, World!\n");
	return (TRUE);
}

int main(void)
{
	if (!test_ft_strlen()
	    || !test_ft_putchar()
			|| !test_ft_putstr())
		return (1);
	return (0);
}
