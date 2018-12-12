/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:47:23 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/07 11:52:56 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *heystack, const char *needle, size_t len)
{
	size_t j;
	size_t i;

	if (ft_strlen(needle) == 0)
		return ((char *)heystack);
	i = 0;
	while (heystack[i] && i < len)
	{
		j = 0;
		if (heystack[i] == needle[j])
		{
			while (needle[j] && needle[j] == heystack[i + j]
				&& i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)&heystack[i]);
		}
		i++;
	}
	return (NULL);
}
