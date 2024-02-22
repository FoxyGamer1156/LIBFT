/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaray-s <cgaray-s@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:46:01 by cgaray-s          #+#    #+#             */
/*   Updated: 2022/12/07 14:46:02 by cgaray-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = -1 * n;
		ft_putchar_fd ('-', fd);
	}
	else
		num = n;
	if (num >= 10)
		ft_putnbr_fd (num / 10, fd);
	ft_putchar_fd ((num % 10) + '0', fd);
}
