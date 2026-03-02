/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:44:47 by kkovtune          #+#    #+#             */
/*   Updated: 2026/01/09 17:48:06 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putd(long int s, size_t *count)
{
	char			*base;
	unsigned int	se;

	base = "0123456789";
	se = s;
	if (se >= 10)
		putd(se / 10, count);
	write(1, &base[se % 10], 1);
	(*count)++;
}

void	ft_putnbr(int n, size_t *count)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
		(*count)++;
	}
	putd(nb, count);
}
