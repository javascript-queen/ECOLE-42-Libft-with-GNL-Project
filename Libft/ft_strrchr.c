/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:26:44 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:58:24 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*finishstring;

	finishstring = (char *)string + ft_strlen(string);
	while (finishstring > string && *finishstring != (char)symbol)
		finishstring--;
	if (*finishstring == (char)symbol)
		return (finishstring);
	return (NULL);
}
