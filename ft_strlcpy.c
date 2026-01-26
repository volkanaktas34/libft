/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:21:16 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/22 19:20:03 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20];
// 	char	src[] = "Hello, World!";
// 	size_t	result;

// 	result = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: %s\n", dest);
// 	printf("Length of source string: %zu\n", result);
// 	return (0);
// }
