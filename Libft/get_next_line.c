/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 06:43:28 by erenae            #+#    #+#             */
/*   Updated: 2021/11/19 06:43:38 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int	ft_strlen_gnl(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *string, int symbol)
{
	while ((*string != '\0') && (*string != symbol))
		string++;
	if (*string == symbol)
		return ((char *) string);
	return ((char *) NULL);
}

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*result;
	int		index1;
	int		index2;

	result = (char *)malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (result == 0)
	{
		free (s1);
		return (0);
	}
	index1 = 0;
	index2 = 0;
	while (s1 && s1[index1])
		result[index2++] = s1[index1++];
	index1 = 0;
	while (s2[index1])
		result[index2++] = s2[index1++];
	result[index2] = '\0';
	free (s1);
	return (result);
}

char	*ft_strncpy(char *dst, char *src, int size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (dst);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	change_line(char *buffer, char **line)
{
	char	*next_line;

	next_line = ft_strchr_gnl(buffer, '\n');
	*next_line = '\0';
	*line = ft_strjoinfree(*line, buffer);
	*line = ft_strjoinfree(*line, "\n");
	next_line++;
	ft_strncpy(buffer, next_line, ft_strlen_gnl(next_line) + 1);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	long		left_symbols;

	if (read(fd, 0, 0) == -1)
		return (0);
	line = 0;
	left_symbols = 1;
	while ((ft_strchr_gnl(buffer, '\n') == 0) && left_symbols > 0)
	{
		line = ft_strjoinfree(line, buffer);
		left_symbols = read(fd, buffer, BUFFER_SIZE);
		buffer[left_symbols] = '\0';
	}
	if (left_symbols < 0 || (left_symbols == 0 && line[0] == '\0'))
	{
		free (line);
		return (0);
	}
	if (ft_strchr_gnl(buffer, '\n'))
		change_line(buffer, &line);
	return (line);
}