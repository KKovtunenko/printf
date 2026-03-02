/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:11:26 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:04:25 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	k;
	char	*c;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	k = 0;
	if (start > size)
		return (ft_strdup(""));
	size = size - start;
	if (len > size)
		len = size;
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	while (k < len)
	{
		c[k] = s[start + k];
		k++;
	}
	c[k] = '\0';
	return (c);
}
