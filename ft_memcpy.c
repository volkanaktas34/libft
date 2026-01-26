/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:41:13 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/24 12:33:29 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[] = "Hello";
// 	char src[] = "42 Istanbul";

// 	int		dest = 7238942;
// 	int		src = 2147483647;

// 	ft_memcpy(&dest, &src, 4);
// 	printf("%d\n", dest);
// 	return (0);
// }
