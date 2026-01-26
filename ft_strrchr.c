/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:40:27 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/17 14:24:01 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	str;
	const char		*start;

	str = (unsigned char)c;
	start = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s >= start)
	{
		if (*s == str)
		{
			return ((char *)s);
		}
		s--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "\0";
// 	int chr = '\0';

// 	printf("%c", *ft_strrchr(str, chr));
// }
