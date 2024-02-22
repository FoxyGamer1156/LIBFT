/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:17:30 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/16 20:17:32 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str == c && *str)
		str++;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		while (*str != c && *str)
			str++;
		i++;
	}
	return (i);
}

static char	*ft_putwords(const char *str, size_t start, size_t finish)
{
	size_t	i;
	char	*words;

	i = 0;
	words = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!words)
		return (NULL);
	while (start < finish)
		words[i++] = str[start++];
	words[i] = '\0';
	return (words);
}

static char	**ft_completestr(char **words, const char *str, char c)
{
	size_t	i;
	size_t	start;
	size_t	position;

	i = 0;
	start = 0;
	position = 0;
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			i++;
			if (str[i] == c || i == ft_strlen(str))
				words[position++] = ft_putwords(str, start, i);
		}
		while (str[i] == c && str[i])
		{
			i++;
			start = i;
		}
	}
	words[position] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !words)
		return (NULL);
	ft_completestr(words, s, c);
	return (words);
}
