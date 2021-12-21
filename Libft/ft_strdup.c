/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:47:46 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 12:44:51 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string1)
{
	char	*copystring;
	size_t	i;

	i = 0;
	copystring = malloc(ft_strlen(string1) + 1);
	if (copystring == NULL)
		return (NULL);
	while (string1[i])
	{
		copystring[i] = string1[i];
		i++;
	}
	copystring[i] = '\0';
	return (copystring);
}
