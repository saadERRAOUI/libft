/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:18:44 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 15:49:44 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;

	character = (char) c;
	if (character == '\0' && s)
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == (char)character)
			return ((char *)s);
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (NULL);
}
