/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:23:15 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/23 17:10:38 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *append, size_t n)
{
	int i;
	size_t q;

	i = 0;
	q = 0;
	while (dest[i] != '\0')
		i++;
	while (append[q] != '\0' && q < n)
	{
		dest[i] = append[q];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}