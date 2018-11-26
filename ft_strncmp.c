/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:47:31 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:52:01 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && n > 0 && str1[i] == str2[i])
	{
		n--;
		i++;
	}
	return ((n) ? ((unsigned char)str1[i] - (unsigned char)str2[i]) : 0);
}
