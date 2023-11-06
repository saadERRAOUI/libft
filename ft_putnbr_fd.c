/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:56:11 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 12:18:32 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * -1;
	}
	if (number <= 9)
		ft_putchar_fd(number + '0', fd);
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + '0', fd);
	}
}
