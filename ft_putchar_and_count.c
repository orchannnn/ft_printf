/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_and_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:44:06 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/03 16:44:08 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_and_count(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

// int main(void)
// {

// 	ft_putchar('A', 1);

// 	return(0);
// }