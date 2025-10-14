/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:47:13 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 10:34:02 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// FIX: this function should not use malloc!!!!
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_memory;

	tmp_memory = malloc(n);
	if (tmp_memory != NULL)
	{
		i = 0;
		while (i < n)
		{
			tmp_memory[i] = ((unsigned char *)src)[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = tmp_memory[i];
			i++;
		}
		free(tmp_memory);
	}
	return (dest);
}
