/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_and_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsuda <otsuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:40:58 by otsuda            #+#    #+#             */
/*   Updated: 2025/08/03 16:54:44 by otsuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_and_count(char *s, int fd)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (*s)
	{
		write(fd, s++, 1);
		len++;
	}
	return (len);
}
