/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:48:14 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/28 15:00:40 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;

	if ((p = malloc(len + 1)) == NULL)
		return (NULL);
	if (!s)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		p[i] = s[start];
		i++;
		len--;
		start++;
	}
	p[i] = '\0';
	return (p);
}
