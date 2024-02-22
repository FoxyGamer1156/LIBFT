/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:17:30 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/11/28 13:17:31 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	while (len > 0 && *p1 == *p2)
	{
		p1++;
		p2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
		return (*p1 - *p2);
}
