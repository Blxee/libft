/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:47:13 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/15 10:57:39 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_bytes;
	unsigned char	*src_bytes;
	size_t			i;

	dest_bytes = (unsigned char *)dest;
	src_bytes = (unsigned char *)src;
	if (dest_bytes <= src_bytes)
	{
		i = 0;
		while (i < n)
		{
			dest_bytes[i] = src_bytes[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_bytes[i] = src_bytes[i];
			i--;
		}
	}
	return (dest);
}
