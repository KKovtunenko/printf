/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:28:25 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:37:04 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	size_t				k;
	const unsigned char	*s3;
	const unsigned char	*s4;

	i = 0;
	k = 0;
	s3 = s1;
	s4 = s2;
	if (n == 0)
	{
		return (0);
	}
	while ((s3[i] == s4[k]) && (i < n - 1))
	{
		i++;
		k++;
	}
	return (s3[i] - s4[k]);
}

// int main()
// {
// 	char s1[] = "ADZ";
// 	char s2[] = "ADC";
// 	printf("%d", ft_memcmp(s1, s2, 3));
// 	return 0;
// }