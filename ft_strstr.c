/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:59:13 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/26 19:53:00 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	if (str2[0] == '\0')
		return ((char*)str1);
	while (str1[i] != '\0')
	{
		j = 0;
		while (str1[i + j] == str2[j])
		{
			if (str2[j + 1] == '\0')
				return ((char*)&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
