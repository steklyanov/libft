/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:06:12 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/28 14:26:04 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		new[index] = f(s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
