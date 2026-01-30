/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:20:08 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 14:25:58 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, len + 1);
	return (p);
}
