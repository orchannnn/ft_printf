/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:26:02 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/09 12:57:13 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_check(char mark, va_list args)
{
	if (mark == 's')
		return (ft_putstr_and_count(va_arg(args, char *), 1));
	if (mark == 'd' || mark == 'i')
		return (ft_putnbr_and_count(va_arg(args, int), 1));
	if (mark == 'c')
		return (ft_putchar_and_count(va_arg(args, int), 1));
	if (mark == '%')
		return (write(1, "%", 1));
	if (mark == 'u')
		return (ft_checku(va_arg(args, unsigned int), 1));
	if (mark == 'x')
		return (ft_putptr_fd(va_arg(args, unsigned int), 0));
	if (mark == 'X')
		return (ft_putptr_fd(va_arg(args, unsigned int), 1));
	if (mark == 'p')
		return (ft_putptr_fd(va_arg(args, void *)));
	return (0);
}

int	ft_printf_fd(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed += format_check(format[++i], args);
		}
		else
		{
			ft_putchar_and_count(format[i], 1);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}
