/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:40:27 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 16:04:03 by vaktas           ###   ########.tr       */
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
		s++;
	while (s >= start)
	{
		if (*s == str)
			return ((char *)s);
		s--;
	}
	return (0);
}
