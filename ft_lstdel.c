/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 19:37:11 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/06 06:55:12 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	if (!alst || !(*alst))
		return ;
	tmp = *alst;
	next = *alst;
	if (del)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			ft_lstdelone(&tmp, del);
			tmp = next;
		}
		*alst = NULL;
	}
}
