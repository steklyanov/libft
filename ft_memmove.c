/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:41:06 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 18:27:54 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    			*ft_memmove(void *dist, const void *src, size_t len)
{
	unsigned char	*copy_dst;
	unsigned char	*copy_src;
	unsigned char	*buffer;
	size_t			i;

	i = len;
	copy_dst = (unsigned char*)dist;
	copy_src = (unsigned char*)src;
	while (i-- > 0)
	{
		*buffer++ = *copy_src++;
	}
	while (len-- > 0)
	{
		*copy_dst++ = *buffer++;
	}
	return (dist);
}
