/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:16:33 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/30 15:55:40 by vaktas           ###   ########.tr       */
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

// void	del_content(void *content)
// {
// 	free(content);
// }

// void print_content(void *content)
// {
// 	printf("Eleman: %s\n", (char *)content);
// }
// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	t_list *node5;
// 	t_list *selam;
// 	t_list *temp;

// 	node1 = ft_lstnew("Node 1");
// 	node2 = ft_lstnew("Node 2");
// 	node3 = ft_lstnew("Node 3");
// 	node4 = ft_lstnew("Node 4");
// 	node5 = ft_lstnew("Node 5");
// 	selam = ft_lstnew("asleam");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node5;
// 	node5->next = NULL;
//  	node2->next = node4;

//     ft_lstadd_front(&node1, selam);
//     ft_lstadd_back(&node5, selam);
//     ft_lstdelone(node3, del_content);

//     temp = node1;

// 	while (temp)
// 	{
// 		printf("Sonuç: %s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}

//     ft_lstclear(&node1, del_content);
// 	t_list *tmp = node1;
// 	while (tmp)
// 	{
// 		printf("Sonuç: %s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split(NULL, '\0');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	char str[] = "Merhaba1 Merhaba2 Merhaba3 Merhaba4";
// 	char **result;

// 	result = ft_split(str, ' ');

// 	char **tmp = result;
// 	while (*tmp)
// 	{
// 		printf("%s\n", *tmp);
// 		tmp++;
// 	}
// 	tmp = result;
// 	while (*tmp)
// 	{
// 		free(*tmp);
// 		tmp++;
// 	}
// 	free(result);
// }

// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *lst = NULL;

// 	node1 = ft_lstnew("Node 1");
// 	node2 = ft_lstnew("Node 2");
// 	node3 = ft_lstnew("Node 3");

// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node3);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char *a = "   Volkan ";
// 	char *b = "  Aktas   ";

// 	size_t a_len = ft_strlen(a);
// 	size_t b_len = ft_strlen(b);
// 	char *address1 = malloc(sizeof(char) * a_len + 1);
// 	char *address2 = malloc(sizeof(char) * b_len + 1);

// 	int i = 0;
// 	while (i < a_len)
// 	{
// 		address1[i] = a[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (i < b_len)
// 	{
// 		address2[i] = b[i];
// 		i++;
// 	}

// 	size_t size =  ft_strlcat(address1, address2, a_len + b_len + 1);
// 	printf("result: %s\n", address1);

// 	char *set = " ";
// 	char *trim = ft_strtrim(address1, set);
// 	printf("trim: %s\n", trim);

// 	char **resultt = ft_split(address1, ' ');
// 	i = 0;
// 	while (resultt[i])
// 	{
// 		printf("%s\n", resultt[i]);
// 		free(resultt[i]);
// 		i++;
// 	}
// 	free(resultt);
// 	free(trim);
// 	free(address1);
// 	free(address2);

// char **result = ft_split(address1, ' ');
// }

// typedef struct s_test
// {
// 	char	*name;
// 	int		*age;
// }			t_test;

// void    f(void *content)
// {
//     t_test *ptr = (t_test *)content;
//     if (!ptr) return;

//     printf("Name: %s, Age: %d\n", ptr->name, *(ptr->age));

//     // 1. Eski hafızayı temizle (strdup ile gelen yer)
//     free(ptr->name); 
    
//     // 2. Yeni ismi heap üzerinde oluştur
//     ptr->name = ft_strdup("Changed Name"); 
    
//     *(ptr->age) = 25;
//     printf("Name: %s, Age: %d\n", ptr->name, *(ptr->age));
// }

// void    del_content(void *content)
// {
//     t_test *ptr = (t_test *)content;
//     if (!ptr) return;
//     free(ptr->name); // strdup ile ayırdığımız alanı temizliyoruz
//     free(ptr->age);
//     free(ptr);
// }

// #include <string.h>

// int main(void)
// {
//     t_test  *ptr;
//     int     *age_value;

//     // 1. Manuel Malloc ve Atama
//     age_value = malloc(sizeof(int));
//     *age_value = 31;
    
//     ptr = malloc(sizeof(t_test));
//     ptr->name = ft_strdup("Volkan"); // String literal değil, heap kopyası
//     ptr->age = age_value;
    
//     // 2. Fonksiyonu Manuel Test Et (Liste olmadan)
//     printf("--- Fonksiyon Testi ---\n");
//     f(ptr); 
    
//     // 3. Temizliği Manuel Test Et
//     printf("--- Temizlik Testi ---\n");
//     del_content(ptr);
    
//     printf("Başarılı!\n");
//     return (0);
// }

// int main(void)
// {
// 	int arr[5] = {1, 2, 3, 4, 5};
// 	ft_bzero(arr, sizeof(arr));
// 	int i = 0;
// 	while (i < sizeof(arr)/sizeof(int))
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return(0);
// }

