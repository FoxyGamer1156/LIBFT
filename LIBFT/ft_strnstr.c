/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:20:29 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:20:30 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *null_find, size_t len)
{
	size_t	i;

	if (!*null_find)
		return ((char *)str);
	while (*str && len--)
	{
		i = 0;
		while (str[i] == null_find[i])
		{
			if (!null_find[++i])
				return ((char *)str);
			if (i > len)
				return (NULL);
		}
		str++;
	}
	return (NULL);
}
