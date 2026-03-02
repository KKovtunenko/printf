/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:07:21 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:29:51 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*where;
	unsigned const char	*from;

	i = 0;
	where = dest;
	from = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		where[i] = from[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[20];

//     ft_memcpy(dest, src, 3);
//     dest[6] = '\0'; 
//     printf("%s\n", dest); 
//     return 0;
// }