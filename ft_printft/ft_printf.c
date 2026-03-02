/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:47:11 by kkovtune          #+#    #+#             */
/*   Updated: 2026/01/09 17:23:17 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_formation(va_list list, size_t *count, const char *format)
{
	if (*format == '\0')
		return ;
	else if (*format == 'c')
		ft_putchar(va_arg(list, int), count);
	else if (*format == 's')
		ft_putstr(va_arg(list, char *), count);
	else if (*format == 'p')
		ft_putptr(va_arg(list, unsigned long), count);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(list, int), count);
	else if (*format == 'u')
		ft_putdiv(va_arg(list, unsigned int), count);
	else if (*format == 'x')
		ft_puthex(va_arg(list, unsigned int), "0123456789abcdef", count);
	else if (*format == 'X')
		ft_puthex(va_arg(list, unsigned int), "0123456789ABCDEF", count);
	else if (*format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	size_t	count;

	count = 0;
	if (!format)
		return (0);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_formation(list, &count, format);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(list);
	return ((int)count);
}
