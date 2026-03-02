/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:25:23 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/17 23:25:25 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if ((c < 127) && (c >= 32))
		return (1);
	else
		return (0);
}

// int main()
// {
//     int c = 'j';
//     //c = ft_isalpha(h);
//     printf ("%d", ft_isprint(c));
//     return 0;
// } 
