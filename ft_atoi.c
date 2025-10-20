/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:52:36 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/20 09:04:16 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 0x09 && c <= 0x0d));
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	nbr;
	int		sign;

	nbr = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nbr * 10 + nptr[i] - '0';
		if (nbr < 0)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
		i++;
	}
	return (sign * nbr);
}
