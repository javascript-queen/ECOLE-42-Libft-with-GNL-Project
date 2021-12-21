 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:29:22 by erenae            #+#    #+#             */
/*   Updated: 2021/10/16 06:47:32 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = malloc(sizeof(t_list));
	if (newelement == NULL)
		return (NULL);
	newelement->content = content;
	newelement->next = NULL;
	return (newelement);
}
