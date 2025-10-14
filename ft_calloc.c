/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:13:21 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 15:41:50 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*memory;
	size_t			i;

	memory = (unsigned char *)malloc(nmemb * size);
	if (memory != NULL)
	{
		i = 0;
		while (i < size)
		{
			memory[i] = 0;
			i++;
		}
	}
	return ((void *)memory);
}
