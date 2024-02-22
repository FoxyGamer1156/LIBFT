/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:17:42 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:17:44 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (len > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		len--;
	}
	return (dest);
}
