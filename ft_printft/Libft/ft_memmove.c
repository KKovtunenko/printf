/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:30:33 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 19:32:53 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*where;
	unsigned const char	*from;

	i = 0;
	where = dest;
	from = src;
	if (dest == src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			where[i] = from[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		where[i - 1] = from[i - 1];
		i--;
	}
	return (dest);
}

// int main()
// {
//     char src[] = "Hello, world!";
//     char dest[] = "NEw YEar";

//     ft_memmove(dest, src, 14);
//     printf("%s", dest);
//     return 0;
// }