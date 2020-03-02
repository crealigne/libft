/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:04:18 by nabbassi          #+#    #+#             */
/*   Updated: 2020/02/25 18:39:13 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	while (j < i)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
