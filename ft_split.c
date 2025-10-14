/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:48:35 by atahiri-          #+#    #+#             */
/*   Updated: 2025/10/14 21:35:13 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		len = 0;
		while (s[i + len] != '\0' && s[i + len] != c)
			len++;
		if (len > 0)
		{
			count++;
			i += len;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	arr_idx;
	size_t	i;
	size_t	len;

	arr = malloc((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr_idx = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		len = 0;
		while (s[i + len] != '\0' && s[i + len] != c)
			len++;
		if (len > 0)
		{
			arr[arr_idx] = malloc(len + 1);
			if (arr[arr_idx] == NULL)
			{
				while (arr_idx > 0)
					free(arr[--arr_idx]);
			}
			ft_strlcpy(arr[arr_idx], s + i, len + 1);
			arr_idx++;
			i += len;
		}
		else
			i++;
	}
	arr[arr_idx] = NULL;
	return (arr);
}
