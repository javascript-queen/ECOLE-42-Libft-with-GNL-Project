/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:35:54 by erenae            #+#    #+#             */
/*   Updated: 2021/10/13 08:35:56 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_separator(char const *s, char c)
{
	char	symbol;
	int		i;
	int		j;

	symbol = c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && symbol == c)
			j++;
		symbol = s[i];
		i++;
	}
	return (j);
}

static void	ft_splits(char **str, const char *s, char c, int splits)
{
	int		mallocindex;
	int		stringi;
	int		splitindex;

	stringi = 0;
	mallocindex = 0;
	splitindex = 0;
	while (splitindex < splits)
	{
		mallocindex = 0;
		while (s[stringi] == c)
			stringi++;
		while (s[stringi + mallocindex] && s[stringi + mallocindex] != c)
			mallocindex++;
		str[splitindex] = ft_calloc(sizeof(char), mallocindex + 1);
		mallocindex = 0;
		while (s[stringi] && s[stringi] != c)
			str[splitindex][mallocindex++] = s[stringi++];
		str[splitindex][mallocindex] = '\0';
		splitindex++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**space;
	int		splits;

	if (!s)
		return (NULL);
	splits = ft_count_separator(s, c);
	space = ft_calloc(sizeof(char *), splits + 1);
	if (!space)
		return (NULL);
	ft_splits(space, s, c, splits);
	space[splits] = NULL;
	return (space);
}
