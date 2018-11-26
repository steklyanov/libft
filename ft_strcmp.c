/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:47:44 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:50:33 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && (str2[i] == str1[i]))
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
