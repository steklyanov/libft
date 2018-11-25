/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:25:45 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/22 22:41:04 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *destination, const char *append)
{
	int i;
	int q;

	i = 0;
	while (destination[i])
		i++;
	while (append[q])
	{
		destination[i++] = append[q++];
	}
	return (destination);
}
