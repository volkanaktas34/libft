/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:16:33 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/26 13:26:30 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// int	main(void)
// {
// 	// char	str1[] = "12345";
// 	// char	str2[] = "12345";

// 	// ft_memcpy(str1 + 1, str1, 4);
// 	// printf("memcpy: %s\n", str1);
// 	// ft_memmove(str2 + 1, str2, 4);
// 	// printf("memmove: %s\n", str2);
// 	// return (0);

// 	// char dest[] = "Hello";
// 	// char src[] = "42 Istanbul";

// 	// int		dest = 7238942;
// 	// int		src = 2147483647;

// 	// printf("memcpyden önce: %d\n", dest);
// 	// ft_memcpy(&dest, &src, 4);
// 	// printf("memcpyden sonra: %d\n", dest);

// 	// const char	str[] = "Hello, 42 Istanbul!";
// 	// int			c;
// 	// size_t		n;
// 	// char		*result;

// 	// c = '2';
// 	// n = 8;
// 	// result = (char *)ft_memchr(str, c, n);
// 	// if (result != NULL)
// 	// 	printf("Character found: %c\n", *result);
// 	// else
// 	// 	printf("Character not found within the first %zu bytes.\n", n);
// 	// return (0);

// 	// const int str[] = {10, 20, 30, 40, 50};
// 	// int			c;
// 	// size_t		n;
// 	// int			*result;
// 	// c = 30;
// 	// n = 5 * sizeof(int);
// 	// result = ft_memchr(str, c, n);
// 	// if (result != NULL)
// 	// 	printf("Integer found: %d\n", *result);
// 	// else
// 	// 	printf("Integer not found within the first %zu bytes.\n", n);
// 	// return (0);
// }

int main()
{
	t_list *node1;
	t_list *node2;

	char *str = "Merhaba 42!";
	int sayi = 42;

	node1 = ft_lstnew(str);
	node2 = ft_lstnew(&sayi);

	if (node1 && node2)
	{
		printf("Düğüm 1 İçeriği: %s\n", (char *)node1->content);
		printf("Düğüm 2 İçeriği %d\n", *(int *)node2->content);

		node1->next = node2;
		printf("Node1'in next adresi artik Node2'yi gösteriyor %p\n", node1->next);
	}
	free(node1);
	free(node2);

	return (0);
}
