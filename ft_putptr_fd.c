/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 08:33:51 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/09 11:25:46 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_change0x(unsigned long n, int uppercase)
{
	char	*hex;

	if (n >= 16)
	{
		ft_change0x(n / 16, uppercase);
		ft_change0x(n % 16, uppercase);
	}
	else
	{
		if (uppercase)
			hex = "0123456789ABCDEF";
		else
			hex = "0123456789abcdef";
		ft_putchar_and_count(hex[n], 1);
	}
}

int	ft_putptr_fd(void *ptr)
{
	int				len;
	unsigned long	address;

	len = 0;
	if (!ptr)
		return (ft_putstr_and_count("(nil)", 1));
	address = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	ft_change0x(address, 0);
	return (len);
}
// int main(void)
// {
// 	int a = 42;
// 	ft_checkp(&a);

// 	return (0);
// }