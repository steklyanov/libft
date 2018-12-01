/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 10:55:46 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/29 19:58:05 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(int nbr)
{
	int		len;
	long	n_tmp;
	char	*str;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = 0;
	n_tmp = nbr;
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	while (nbr)
	{
		str[len] = (n_tmp % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
