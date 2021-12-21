/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:05:52 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:46:49 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	i = 0;
	dst_size = 0;
	while (dst[dst_size] && dst_size < size)
		dst_size++;
	while ((src[i]) && (dst_size + i + 1) < size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	if (dst_size != size)
		dst[dst_size + i] = '\0';
	return (dst_size + ft_strlen(src));
}
