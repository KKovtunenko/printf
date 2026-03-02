/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:57:54 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 20:26:36 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_count(long int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*create_char(char *k, size_t i, long int nb)
{
	size_t	j;

	j = 0;
	if (k[0] == '-')
	{
		while (i > 1)
		{
			k[i - 1] = (nb % 10) + '0';
			nb = (nb / 10);
			i--;
		}
	}
	else
	{
		while (j < i)
		{
			k[i - 1] = (nb % 10) + '0';
			nb = (nb / 10);
			i--;
		}
	}
	return (k);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*k;
	size_t		i;

	nb = n;
	i = digit_count(nb);
	k = malloc(i + 1);
	if (!k)
		return (NULL);
	if (nb < 0)
	{
		k[0] = '-';
		nb = -nb;
	}
	else
		k[0] = '0';
	if (nb == 0)
		k[0] = '0';
	if (nb > 0)
	{
		k = create_char(k, i, nb);
	}
	k[i] = '\0';
	return (k);
}
