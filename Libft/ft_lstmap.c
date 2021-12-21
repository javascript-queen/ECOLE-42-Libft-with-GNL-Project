/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 07:15:55 by erenae            #+#    #+#             */
/*   Updated: 2021/10/17 07:16:03 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew((f(lst->content)));
	if (!new)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	list = new;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew((f(lst->content)));
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&list, del);
		}
		lst = lst->next;
		ft_lstadd_back(&list, new);
	}
	return (list);
}
