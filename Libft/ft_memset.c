/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:15:58 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:39:33 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string1, int symbol, size_t bytesnum)
{
	unsigned char	*encrypted;

	encrypted = (unsigned char *)string1;
	while (bytesnum--)
		*encrypted++ = (unsigned char)symbol;
	return (string1);
}
