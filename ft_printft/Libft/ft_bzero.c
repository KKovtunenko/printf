/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:20:07 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 22:41:49 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = s;
	while (i < n)
	{
		new[i] = '\0';
		i++;
	}
}

// int main()
// {
//     char y[] = "hello world";
//     size_t i = 4;
//     char fin = ft_bzero(y, i);
//     printf("%s", fin);
//     return (0);
// }