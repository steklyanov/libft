/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:46:40 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/06 10:26:44 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int			i;
	int			isneg;
	long long	result;
	long long	tmp;

	i = 0;
	result = 0;
	isneg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		isneg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		tmp = result;
		result = result * 10 + (str[i] - 48);
		if (tmp > result)
			return (isneg == -1 ? 0 : -1);
		i++;
	}
	return (isneg * (int)result);
}
