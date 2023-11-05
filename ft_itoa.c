/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:40:49 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 12:00:53 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*is_negative(long n, int digit_count)
{
	char	*s;
	int		i;

	s = malloc((digit_count + 2) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	s[0] = '-';
	n *= -1;
	while (i < digit_count)
	{
		s[digit_count - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[digit_count + 1] = '\0';
	return (s);
}

char	*is_positive(long n, int digit_count)
{
	char	*s;
	int		i;

	s = malloc((digit_count + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 1;
	while (i <= digit_count)
	{
		s[digit_count - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[digit_count] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	long	temp;
	int		digit_count;

	temp = (long)n;
	digit_count = 0;
	if (temp == 0)
		digit_count = 1;
	while (temp != 0)
	{
		temp /= 10;
		digit_count++;
	}
	if (n >= 0)
		return (is_positive(n, digit_count));
	else if (n < 0)
		return (is_negative(n, digit_count));
	return (NULL);
}
