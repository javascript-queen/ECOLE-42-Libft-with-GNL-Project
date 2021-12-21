/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:02:27 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:37:26 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *string2, const void *string1, size_t bytesnum)
{
	unsigned char		*string22;
	const unsigned char	*string11;
	size_t				i;

	if (string1 == NULL && string2 == NULL)
		return (NULL);
	string22 = (unsigned char *)string2;
	string11 = (unsigned char *)string1;
	i = 0;
	if (string11 < string22)
		while (++i <= bytesnum)
			string22[bytesnum - i] = string11[bytesnum - i];
	else
		while (bytesnum-- > 0)
			*string22++ = *string11++;
	return (string2);
}
