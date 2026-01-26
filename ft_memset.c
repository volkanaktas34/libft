/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:03:49 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/17 17:31:58 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n != 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	int a = 0;
// 	ft_memset(&a, 256, 1);
// 	printf("%d\n", a);
// }

// #include "libft.h"


// int	main(void)
// {
// 	long a = 0;
// 	ft_memset(&a, 255, 5);
// 	ft_memset(&a, 248, 2);
// 	ft_memset(&a, 248, 1);
// 	printf("%d", a);
// }


// #include <stdio.h>
// int main(void)
// {
// 	int arr[] = {1, 2, 3, 4, 5};
// 	ft_memset(&arr[0], 5, 1);
// 	ft_memset(&arr[1], 6, 1);
// 	ft_memset(&arr[2], 7, 1);
// 	ft_memset(&arr[3], 8, 1);
// 	ft_memset(&arr[4], 9, 1);

// 	int i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }


// #include <stdio.h>

// int main()
// {
// 	int a[] = {0, 1, 2, 3};
// 	a[2] = (int)(0b00000000000000000000000000001111 | 0b00000000000000001100001100000000 | 0b00000000111100000000000000000000 | 0b11111111000000000000000000000000);
// 	a[1] = (15 | 0b11000011 << 8 | 0b11110000 << 16 | 0b11111111 << 24);
// 	ft_memset(&a[2], 0, 4);
// 	ft_memset(&a[2], 255, 3);
// 	ft_memset(&a[2], 0, 2);
// 	printf("%d", a[2]);

// }

// #include <stdio.h>

// int main()
// {
// 	0=585
// 	1=3456
// 	2=-234
// 	int i;
// 	int a[4] = {0, 1, 2, 3,4,5,6,7};

// 	ft_memset((unsigned char *)a, 0b11111111, 4);
// 	ft_memset((unsigned char *)a+4, 0b11010110, 1);
// 	//ft_memset(a, 0b11010110, 1);
// 	// ft_memset(&a, 255, 4);
// 	// ft_memset(&a, 214, 1);
// 	// ft_memset(&a, 0xff, 4);
// 	// ft_memset(&a, 0xd6, 1);

// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", a[i]);
// 		i++;
// 	}
// 	return 0;
// }