/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:47:51 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/29 12:08:04 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*new;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i])
		i++;
	if (!(new = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[k])
	{
		new[k] = str[k];
		k++;
	}
	new[k] = '\0';
	return (new);
}
