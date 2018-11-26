/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:19:01 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:48:41 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	copy_dst = (unsigned char*)dst;
	copy_src = (unsigned char*)src;
	while (n-- > 0)
	{
		*(copy_dst++) = *(copy_src++);
	}
	return (dst);
}
