/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:23:21 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/28 14:27:57 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	len;
	char			*new;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if ((new = malloc(len + 1)) == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		new[index] = f(index, s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
