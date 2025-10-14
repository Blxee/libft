/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:20:12 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 09:22:04 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	islower;
	int	isupper;
	int	isdigit;

	islower = (c >= 'a' && c <= 'z');
	isupper = (c >= 'A' && c <= 'Z');
	isdigit = (c >= '0' && c <= '9');
	return (islower || isupper || isdigit);
}
