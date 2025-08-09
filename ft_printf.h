/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:24:56 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/03 16:57:42 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>//ポインタサイズの符号なし整数型
# include "libft/libft.h"

int	ft_putnbr_and_count(int n, int fd);
int	ft_putstr_and_count(char *s, int fd);
int	ft_putchar_and_count(char c, int fd);
int	ft_checku(unsigned int n, unsigned int fd);
int	ft_printf_fd(const char *format, ...);
int	ft_putptr_fd(void *ptr);

#endif