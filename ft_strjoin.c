/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:22:03 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 12:23:56 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		size_s1;
	int		size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	ptr = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (size_s1 + size_s2))
	{
		ptr[i] = s2[i - size_s1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
