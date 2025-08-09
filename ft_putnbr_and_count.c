/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_and_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:14:22 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/09 11:34:30 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_and_count(int n, int fd)
	{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_and_count('-', fd);
		len++;
		nb = -nb;
	}
	if (nb >= 10)
		len = ft_putnbr_and_count(nb / 10, fd);
	len += ft_putchar_and_count((nb % 10) + '0', fd);
	return (len);
}

// int	main(void)
// {
// 	int count;

// 	count = ft_putnbr_fd(-42, 1);  // 出力: -42
// 	printf("\n出力した文字数: %d\n", count);  // → 3

// 	count = ft_putnbr_fd(123456, 1);  // 出力: 123456
// 	printf("\n出力した文字数: %d\n", count);  // → 6

// 	count = ft_putnbr_fd(-2147483648, 1);  // 出力: -2147483648
// 	printf("\n出力した文字数: %d\n", count);  // → 11

// 	return 0;
// }
