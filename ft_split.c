/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serraoui <serraoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:04:29 by serraoui          #+#    #+#             */
/*   Updated: 2023/11/05 14:34:41 by serraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	chuncks_number;

	i = 0;
	chuncks_number = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			chuncks_number += 1;
		i++;
	}
	if (s[i - 1] != c)
		chuncks_number += 1;
	return (chuncks_number);
}

static int	count_word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	*free_allocation(char **s, int count)
{
	while (count >= 0)
	{
		free(s[count]);
		count--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		offset;
	int		j;
	int		i;
	int		chuncks_number;

	if (!s || !c)
		return (NULL);
	chuncks_number = count_words(s, c);
	str = malloc((chuncks_number + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	offset = 0;
	i = 0;
	while (i < chuncks_number)
	{
		str[i] = malloc((count_word_len(&s[offset], c) + 1) * sizeof(char));
		if (!str[i])
			return (free_allocation(str, i));
		j = 0;
		while (s[offset] == c)
			offset++;
		while (s[offset] && s[offset] != c)
		{
			str[i][j] = s[offset];
			j++;
			offset++;
		}
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
