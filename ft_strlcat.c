/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:31:46 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 12:33:34 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict d, const char *restrict s, size_t size)
{
	size_t	i;
	size_t	size_d;
	size_t	size_s;

	i = 0;
	size_d = ft_strlen(d);
	size_s = ft_strlen(s);
	if (size == 0)
		return (size_s);
	if (size < size_d)
		return (size_s + size);
	else if (size == size_d)
		return (size_d + size_s);
	while (s[i] && (i + size_d) < (size - 1))
	{
		d[size_d + i] = s[i];
		i++;
	}
	d[size_d + i] = '\0';
	return (size_d + size_s);
}
