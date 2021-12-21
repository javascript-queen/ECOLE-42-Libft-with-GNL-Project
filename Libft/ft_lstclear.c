/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:18:14 by erenae            #+#    #+#             */
/*   Updated: 2021/10/17 16:18:18 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		element = *lst;
		*lst = element->next;
		free(element);
	}
	*lst = NULL;
}
