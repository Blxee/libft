#include "libft.h"

static int ft_isspace(char c)
{
	return ((c >= 8 && c <= 13) || c == ' ');
}

int ft_atoi(const char *nptr)
{
	int nbr;
	int sign;
	size_t i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * nbr);
}
