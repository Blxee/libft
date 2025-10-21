/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:56:36 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/21 12:08:35 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	i;
	char	*sub;

	if (s == NULL)
		return (NULL);
	sub_len = ft_strlen(s);
	if (len < sub_len)
		sub_len = len;
	sub = ft_calloc(sizeof(char), sub_len + 1);
	if (start >= sub_len)
		return (sub);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < sub_len && s[i] != '\0' && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
