/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:57:22 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 11:11:18 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	number;
	int		i;
	int		is_negative;

	number = 0;
	i = 0;
	is_negative = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		is_negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		if (number < 0 && is_negative == -1)
			return (0);
		else if (number < 0 && is_negative == 1)
			return (-1);
		number = number * 10 + str[i++] - '0';
	}
	return (number * is_negative);
}
