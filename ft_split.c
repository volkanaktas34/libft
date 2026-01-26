/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:39:44 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/22 19:47:24 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_segment(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	segment_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	**free_all(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		length;
	int		i;

	result = malloc(sizeof(char *) * (count_segment(s, c) + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			length = segment_length(s, c);
			result[i++] = ft_substr(s, 0, length);
			if (!result[i - 1])
				return (free_all(result, i - 2));
			s += length;
		}
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split(NULL, '\0');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return 0;
// }
