/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:26:11 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/07 12:19:32 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy_arr;
	size_t			i;

	i = 0;
	copy_arr = (unsigned char*)s;
	while (n - i++ != 0)
	{
		if (*(copy_arr++) == (unsigned char)c)
			return ((void*)(--copy_arr));
	}
	return (NULL);
}
