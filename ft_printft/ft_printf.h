/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:40:51 by kkovtune          #+#    #+#             */
/*   Updated: 2026/01/09 19:24:05 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

void	ft_putchar(char c, size_t *count);
void	ft_putstr(char *s, size_t *count);
void	ft_puthex(unsigned int n, char *base, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putdiv(long int s, size_t *count);
void	ft_putptr(unsigned long s, size_t *count);

int		ft_printf(const char *format, ...);

#endif