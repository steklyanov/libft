/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:35:20 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/29 09:52:03 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*new;
	unsigned int	start;
	unsigned int	len;
	unsigned int	k;

	start = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (!(new = (char *)malloc(sizeof(char) * (len - start + 2))))
		return (NULL);
	while (k < len - start + 1)
	{
		new[k] = s[start + k];
		k++;
	}
	new[k] = '\0';
	return (new);
}
