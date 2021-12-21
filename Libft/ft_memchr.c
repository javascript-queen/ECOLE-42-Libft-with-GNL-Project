/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:23:33 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:27:23 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string1, int symbol, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)string1)[i] == (unsigned char)symbol)
			return (&((void *)string1)[i]);
		i++;
	}
	return (NULL);
}
