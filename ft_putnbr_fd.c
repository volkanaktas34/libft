/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaktas<vaktas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:28:25 by vaktas            #+#    #+#             */
/*   Updated: 2026/01/24 18:10:06 by vaktas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*
ft_putnbr_fd:
n = 123
fd = 1

int *a = malloc(10);<l
ft_putnbr_fd:
n = 12
fd = 1

ft_putnbr_fd:
n = 1
fd = 1



ft_putnbr_fd:
n = 1
fd = 1


ft_putnbr_fd:
n = 2
fd = 1


ft_putnbr_fd:
n = 3
fd = 1


123
*/




int	main(void)
{
	int fd;

	fd = open("test.txt", O_CREAT | O_RDWR, 0644);

	ft_putnbr_fd(123, fd);
	// ft_putchar_fd('\n', fd);
	// ft_putnbr_fd(123456, fd);
	// ft_putchar_fd('\n', fd);
	// ft_putnbr_fd(-98765, fd);
	// ft_putchar_fd('\n', fd);
	// ft_putnbr_fd(0, fd);
	// ft_putchar_fd('\n', fd);

	close(fd);
}