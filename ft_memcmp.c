/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:10:53 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 18:50:07 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
    unsigned char   *c_arr1;
    unsigned char   *c_arr2;

    while(n > 0)
    {
        if (*c_arr1 == *c_arr2)
            n--;
        else
            return (c_arr1 - c_arr2);
    }
    return (0);
}
