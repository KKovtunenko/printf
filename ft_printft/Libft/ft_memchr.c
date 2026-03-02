/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:34:59 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 22:47:41 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*k;

	i = 0;
	k = s;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
			return ((void *) &k[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *str = "hello world";
// 	char *found = ft_memchr(str, 'o', 10);
// 	printf("%s", found);
// 	return 0;
// }