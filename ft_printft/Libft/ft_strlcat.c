/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:11:56 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 19:27:58 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dest_len >= dstsize || dstsize == 0)
		return (dstsize + src_len);
	while (src[i] != '\0' && (dest_len + i + 1 < dstsize))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main()
// {
// 	size_t i;
// 	char y[10] = "haha";
// 	char *z = "hellojrrj";
// 	i = ft_strlcat(y, z, 4);
// 	printf("%zu", i);
// }