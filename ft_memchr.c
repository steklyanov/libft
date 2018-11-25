/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:26:11 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 18:07:30 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*copy_arr;

	while (n > 0)
	{
		if (*copy_arr++ == (unsigned char)c)
			return (void*)(copy_arr);
	}
	return (NULL);
}
