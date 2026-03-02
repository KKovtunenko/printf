/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:57:08 by kkovtune          #+#    #+#             */
/*   Updated: 2026/01/09 17:23:00 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr_recursive(unsigned long n, size_t *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putptr_recursive(n / 16, count);
	write(1, &base[n % 16], 1);
	(*count)++;
}

void	ft_putptr(unsigned long s, size_t *count)
{
	unsigned long	se;

	se = s;
	if (!s)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	write (1, "0x", 2);
	(*count) += 2;
	ft_putptr_recursive(se, count);
}
