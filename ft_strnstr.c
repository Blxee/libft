/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:16 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/19 12:04:01 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{

	int max_len;
	int little_len;
	int	i;


	max_len = (int)len;
	little_len = (int)ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (big == NULL || little_len > (int)ft_strlen(big))
		return (NULL);
	i = 0;
	while (i <= (max_len - little_len) && big[i] != '\0')
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
