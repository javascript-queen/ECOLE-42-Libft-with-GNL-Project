/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:52:52 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:01:25 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t numobjects, size_t sizeobject)
{
	char			*memory;
	unsigned int	allmemory;
	unsigned int	i;

	allmemory = numobjects * sizeobject;
	memory = malloc(allmemory);
	if (!(memory))
		return (NULL);
	i = 0;
	while (allmemory--)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
