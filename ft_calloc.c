/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:00:55 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/17 17:31:28 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}

// a * b > size == a > size / b;

// int	main(void)
// {
// 	int		*arr;
// 	size_t	i;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 		i++;
// 	}
// }
