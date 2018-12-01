/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:52:45 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/29 15:08:28 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_wrds_cnt(char const *s, char c)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index])
			result++;
		while (s[index] && (s[index] != c))
			index++;
	}
	return (result);
}

static char			*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		index;
	int		j;
	int		z;

	index = 0;
	j = 0;
	z = 0;
	if (!s || !c)
		return (NULL);
	if (!(result = (char **)malloc(sizeof(char *) * (get_wrds_cnt(s, c) + 1))))
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		j = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > j)
			result[z++] = ft_strndup(s + j, index - j);
	}
	result[z] = 0;
	return (result);
}
