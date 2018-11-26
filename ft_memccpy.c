/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:01:40 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:48:11 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sc;

	ds = (unsigned char*)dest;
	sc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sc[i];
		if (ds[i] == (unsigned char)c)
			return ((void *)(dest + i + 1));
		i++;
	}
	return (NULL);
}
