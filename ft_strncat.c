/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:38:27 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/28 15:04:14 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
