/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:35:50 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:41:51 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while ((*string != '\0') && (*string != symbol))
		string++;
	if (*string == symbol)
		return ((char *) string);
	return ((char *) NULL);
}
