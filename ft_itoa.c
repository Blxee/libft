/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:38:59 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 21:52:14 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*nbr;
	long	num;

	nbr = malloc(12);
	if (nbr == NULL)
		return (NULL);
	num = (long)n;
	i = 0;
	if (num < 0)
	{
		nbr[i++] = '-';
		num = -num;
	}
	// FIX: handle when n = 0
	while (num / 10 > 0)
	{
		nbr[i++] = num % 10;
		num /= 10;
	}
	nbr[i] = '\0';
	ft_strrev(nbr);
	return (nbr);
}
