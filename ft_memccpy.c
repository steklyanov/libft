/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:01:40 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 17:59:10 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	char		*ds;
	const char	*sc;

	if (dest && src)
	{
		ds = dest;
		sc = src;
		i = 0;
		while (i < (int)n)
		{
			ds[i] = sc[i];
			if (sc[i] == (unsigned char)c)
			{
				i++;
				return (void *)(&ds[i]);
			}
			i++;
		}
	}
	return (0);
}
