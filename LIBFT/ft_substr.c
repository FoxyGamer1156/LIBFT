/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:43:59 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/05 17:44:06 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*dest;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (ft_strlen(str) < len)
		len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char ) * len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &str[start], len + 1);
	return (dest);
}
