/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:22:47 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:49:43 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char*)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		len--;
		p++;
	}
	return (b);
}
