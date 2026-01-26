/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:41:36 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/17 14:23:18 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	str[] = "Hello, 42 Istanbul!";
// 	int			c;
// 	size_t		n;
// 	char		*result;

// 	c = '2';
// 	n = 5;
// 	result = (char *)ft_memchr(str, c, n);
// 	if (result != NULL)
// 		printf("Character found: %c\n", *result);
// 	else
// 		printf("Character not found within the first %zu bytes.\n", n);
// 	return (0);
// }
