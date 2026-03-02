/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:54:51 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:44:23 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	str = (unsigned char *)s;
	ch = c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == ch)
		return ((char *)&str[i]);
	return (NULL);
}

// int main()
// {
// 	char *c = "hello";
// 	int i = 'e';
// 	printf ("%s", ft_strchr(c, i));
// }