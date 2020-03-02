/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:42:05 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/02 18:30:59 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len_nombre(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i = i + 1;
		n = (-1) * n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char *str;
	long len;
	long j;

	j = n;
	len = ft_len_nombre(j);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (j == 0)
		str[0] = '0';
	if (j < 0)
	{
		str[0] = '-';
		j = (-1) * j;
	}
	len = len - 1;
	while (j > 0)
	{
		str[len] = (j % 10) + 48;
		j = j / 10;
		len--;
	}
	return (str);
}
