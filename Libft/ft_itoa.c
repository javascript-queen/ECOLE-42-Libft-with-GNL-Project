/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 06:59:05 by erenae            #+#    #+#             */
/*   Updated: 2021/10/13 06:59:07 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizen(int n)
{
	int		size;
	long	n2;

	n2 = n;
	size = 1;
	if (n2 < 0)
	{
		size++;
		n2 = -n2;
	}
	while (n2 >= 10)
	{
		size++;
		n2 /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	n2;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_sizen(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	n2 = n;
	if (n2 < 0)
		n2 = -n2;
	str[ft_sizen(n) - i++] = '\0';
	while (n2 >= 10)
	{
		str[ft_sizen(n) - i++] = (n2 % 10) + '0';
		n2 /= 10;
	}
	str[ft_sizen(n) - i++] = (n2 % 10) + '0';
	return (str);
}
