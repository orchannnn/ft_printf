/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 07:57:13 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/09 10:54:05 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checku(unsigned int n, unsigned int fd)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_checku(n / 10, fd);
	len += ft_putchar_and_count((n % 10) + '0', fd);
	return (len);
}
// int	main(void)
// {
// 	int count = ft_checku(4294967295, 1);  // 出力: 4294967295
// 	printf("\n出力した文字数: %d\n", count);  // → 出力: 10
// 	return 0;
// }