/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:38:03 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 16:47:31 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstack, const char *ndle, size_t len)
{
	int		i;
	size_t	size_n;
	int		j;

	i = 0;
	size_n = ft_strlen(ndle);
	if (size_n == 0)
		return ((char *)hstack);
	while (hstack[i] && i < len)
	{
		if ((hstack[i] == ndle[0]))
		{
			j = 0;
			while (ndle[j] && hstack[i + j] == ndle[j] && j < (len - i))
				j++;
			if (j == size_n)
				return ((char *)hstack + i);
		}
		i++;
	}
	return (NULL);
}
