/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:00:15 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/24 13:14:09 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == str)
		{
			return ((char *)s);
		}
		s++;
	}
	if (str == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	str[] = "Hello, 42 Istanbul!";
// 	int			c;
// 	char		*result;

// 	c = 'o';
// 	result = ft_strchr(str, c);
// 	if (result != NULL)
// 		printf("Character found: %p\n", &result);
// 	else
// 		printf("Character not found.\n");
// 	return (0);
// }
