/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkovtune <kkovtune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:58:45 by kkovtune          #+#    #+#             */
/*   Updated: 2025/11/23 17:17:38 by kkovtune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*word_len(const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	start = (*i);
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	len = *i - start;
	return (ft_substr(s, start, len));
}

static void	potato_free(char **s, size_t k)
{
	while (k > 0)
	{
		k--;
		free(s[k]);
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**mal;
	size_t	k;
	size_t	i;
	size_t	size;

	k = 0;
	if (!s)
		return (NULL);
	size = word_count(s, c);
	i = 0;
	mal = malloc(sizeof(char *) * (size + 1));
	if (!mal)
		return (NULL);
	while (k < size)
	{
		mal[k] = word_len(s, c, &i);
		if (!mal[k])
		{
			potato_free(mal, k);
			return (NULL);
		}
		k++;
	}
	mal[k] = NULL;
	return (mal);
}
