/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:45:17 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/06 18:37:24 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!s && !d)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}
