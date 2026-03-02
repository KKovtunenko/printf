/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:26:04 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 20:04:57 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] == s2[k]) && (s1[i] != '\0')
		&& (s2[k] != '\0') && (i < (n - 1)))
	{
		i++;
		k++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[k]);
}

// int main()
// {
// 	char s1[] = "ADZ";
// 	char s2[] = "ADC";
// 	printf("%d", ft_strncmp(s1, s2, 3));
// 	return 0;
// }