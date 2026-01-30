/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:00:15 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 16:04:33 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == str)
			return ((char *)s);
		s++;
	}
	if (str == '\0')
		return ((char *)s);
	return (0);
}
