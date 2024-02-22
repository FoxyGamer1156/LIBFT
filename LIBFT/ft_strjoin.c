/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:17:11 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/05 18:17:13 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	int		i;

	i = 0;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (*str1)
		ptr[i++] = *str1++;
	while (len2--)
		ptr[i++] = *str2++;
	ptr[i] = '\0';
	return (ptr);
}
