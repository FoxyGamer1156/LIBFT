/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:17:57 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:17:58 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if ((char *)dest > (const char *)src)
	{
		i = (int) len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) len)
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dest);
}
