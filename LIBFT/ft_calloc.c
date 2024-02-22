/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:29:18 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/02 11:29:20 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	char	*ptr;

	ptr = malloc(count * len);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, len * count);
	return (ptr);
}
