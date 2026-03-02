/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:41:49 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 18:44:34 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	front_inside(const char *s, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (set[k] != '\0')
		{
			if (s[i] == set[k])
				break ;
			k++;
		}
		if (s[i] != set[k])
			return (i);
		i++;
		k = 0;
	}
	return (i);
}

static int	back_inside(const char *s, char const *set)
{
	int		i;
	size_t	k;	

	i = ft_strlen(s) - 1;
	k = 0;
	while (i > 0)
	{
		while (set[k] != '\0')
		{
			if (s[i] == set[k])
				break ;
			k++;
		}
		if (s[i] != set[k])
			return (i);
		i--;
		k = 0;
	}
	return (i);
}

static char	*check_if(size_t k, size_t m)
{
	char	*c;

	if (m > k)
	{
		c = malloc(1);
		if (!c)
			return (NULL);
		ft_bzero(c, 1);
		return (c);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	m;
	char	*c;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	k = back_inside(s1, set);
	m = front_inside(s1, set);
	c = check_if(k, m);
	if (c)
		return (c);
	c = malloc(sizeof(char) * ((k - m) + 2));
	if (!c)
		return (NULL);
	while (i < (k - m + 1))
	{
		c[i] = s1[m + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
