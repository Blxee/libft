/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:03:59 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 16:12:28 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	new[0] = '\0';
	ft_strlcat(new, s1, len);
	ft_strlcat(new, s2, len);
	return (new);
}
