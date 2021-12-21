/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:27:49 by erenae            #+#    #+#             */
/*   Updated: 2021/10/12 09:27:51 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string1;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	string1 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string1)
		return (NULL);
	i = 0;
	while (*s1)
		string1[i++] = *s1++;
	while (*s2)
		string1[i++] = *s2++;
	string1[i++] = '\0';
	return (string1);
}
