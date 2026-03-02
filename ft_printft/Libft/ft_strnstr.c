/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:04:30 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:00:26 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i + k] == little [k])
			&& (little[k] != '\0') && (i + k < len))
		{
			k++;
		}
		if (little[k] == '\0')
			return ((char *)&big[i]);
		k = 0;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *big = "haha hello haha";
// 	char *small = "";
// 	printf("%s", ft_strnstr(big, small, 12));
// 	return (0);
// }