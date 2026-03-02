/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:06:38 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 22:42:34 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*c;
	size_t	k;

	if (nmemb == 0 || size == 0)
	{
		c = malloc(1);
		if (!c)
			return (NULL);
		ft_bzero(c, 1);
		return (c);
	}
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	k = size * nmemb;
	c = malloc(k);
	if (!c)
		return (NULL);
	ft_bzero(c, k);
	return (c);
}
