/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:47:51 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 20:43:16 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char        *ft_strdup(const char *str)
{
	char    *new;
	int     i;

	i = 0;
	while (str[i]) 
		i++;
	if (!(new = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	while (i-- > 0)
		new[i] = str[i];
	return (new);
}