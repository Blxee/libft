/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:17:13 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/15 10:54:42 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len);
	ft_memcpy(str, s, len);
	return (str);
}
