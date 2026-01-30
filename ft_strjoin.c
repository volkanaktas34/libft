/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:50:32 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 14:26:10 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	join = (char *)malloc(s1len + s2len + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1len);
	ft_memcpy(join + s1len, s2, s2len);
	join[s1len + s2len] = '\0';
	return (join);
}
