/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:43:12 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 22:50:49 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = ptr;
	while (i < num)
	{
		new[i] = value;
		i++;
	}
	return (new);
}

// int main()
// {
//     char y[] = "hello world";
//     int k = '6';
//     size_t i = 4;
//     char *fin = ft_memset(y, k, i);
//     printf("%s", fin);
//     return (0);
// }