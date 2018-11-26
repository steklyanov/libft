/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:10:53 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:48:02 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*c_arr1;
	unsigned char	*c_arr2;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	c_arr1 = (unsigned char*)arr1;
	c_arr2 = (unsigned char*)arr2;
	while (*c_arr1 == *c_arr2 && ++i < n)
	{
		c_arr1++;
		c_arr2++;
	}
	return ((int)*c_arr1 - *c_arr2);
}
