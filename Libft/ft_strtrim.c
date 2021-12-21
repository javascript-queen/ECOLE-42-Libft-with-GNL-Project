/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:30:03 by erenae            #+#    #+#             */
/*   Updated: 2021/10/12 11:30:06 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		finish;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	finish = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= finish)
		start++;
	if (start > finish)
		return (ft_strdup(s1 + finish + 1));
	while (ft_strchr(set, s1[finish]) && finish >= 0)
		finish--;
	str = malloc(finish - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], finish - start + 2);
	return (str);
}
