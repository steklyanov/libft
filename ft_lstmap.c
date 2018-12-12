/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 07:44:31 by mmraz             #+#    #+#             */
/*   Updated: 2018/12/07 12:17:05 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*list;

	if (lst == NULL || f == NULL)
		return (NULL);
	if ((list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if ((list->next = (t_list*)malloc(sizeof(t_list))) == NULL)
		{
			ft_kill_list(new);
			return (NULL);
		}
		if ((list->next = f(lst)) == NULL)
		{
			ft_kill_list(new);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
