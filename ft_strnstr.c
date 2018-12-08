/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:47:23 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/06 12:28:27 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *heystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)&heystack[0]);
	while (heystack[i] && needle[j] && len--)
	{
		if (heystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (!needle[j] && j != 0)
			return ((char*)&heystack[i - --j]);
		i++;
	}
	return (0);
}
