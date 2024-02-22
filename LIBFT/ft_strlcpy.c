/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:19:41 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:19:43 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (len == 0)
		return (srcsize);
	if (len != 0)
	{
		while (src[i] != '\0' && i < (len - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
