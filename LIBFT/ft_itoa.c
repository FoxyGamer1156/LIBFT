/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:43:21 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/20 17:43:24 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i = i * -1;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	long int	num;

	num = n;
	i = ft_countdigit(n);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[i--] = 0;
	if (num == 0)
		str = ft_calloc(2, sizeof(char));
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		str[i--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
