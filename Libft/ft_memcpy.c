/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:33:02 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:34:22 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *string2, const void *string1, size_t bytesnum)
{
	unsigned char	*string22;
	unsigned char	*string11;

	if (string1 == NULL && string2 == NULL)
		return (NULL);
	string22 = (unsigned char *)string2;
	string11 = (unsigned char *)string1;
	while (bytesnum--)
		*string22++ = *string11++;
	return (string2);
	if (string2 == NULL && string1 == NULL)
		return (NULL);
}
