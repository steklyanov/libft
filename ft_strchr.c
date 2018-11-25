/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:14:24 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/24 14:38:24 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strchr(const char *str, int ch)
{
    while (*str++ != '\0' && *str != ch)
        ;
    return ((char*)str);
}  