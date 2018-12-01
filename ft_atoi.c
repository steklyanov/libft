/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:46:40 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/29 19:31:20 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	int n;
	int isneg;

	i = 0;
	isneg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	(str[i] == '-') ? isneg = 1 : isneg;
	if (str[i] == '-' || str[i] == '+')
		i++;
	n = 0;
	while (isdigit(str[i]))
		n = n * 10 + (str[i++] - '0');
	(isneg == 1) ? n = -n : n;
	return (n);
}

int		main()
{
	ft_atoi('   87');
	return (0);
}
