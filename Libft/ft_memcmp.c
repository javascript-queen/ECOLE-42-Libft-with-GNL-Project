/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:00:06 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:32:24 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *string2, const void *string1, size_t bytesnum)
{
	const unsigned char	*string22;
	const unsigned char	*string11;

	if (string1 == string2 || bytesnum == 0)
		return (0);
	string22 = (const unsigned char *)string2;
	string11 = (const unsigned char *)string1;
	while (bytesnum--)
	{
		if (*string22 != *string11)
			return (*string22 - *string11);
		if (bytesnum)
		{
			string22++;
			string11++;
		}
	}
	return (0);
}
