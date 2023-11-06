/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:41:57 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/06 09:31:40 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	int		start;
	int		end;
	int		nav;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	nav = 0;
	while (check_set(s1[start], set))
		start++;
	while (check_set(s1[end - 1], set) && end > start)
		end--;
	strtrim = malloc((end - start + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	while (nav < end - start)
	{
		strtrim[nav] = s1[nav + start];
		nav++;
	}
	strtrim[nav] = '\0';
	return (strtrim);
}
