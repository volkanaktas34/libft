/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:00:55 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 14:24:21 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = nmemb * size;
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}
