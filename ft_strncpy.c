/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:09:35 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/04 16:54:15 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*pdst;

	pdst = dst;
	while (*src != '\0' && n > 0)
	{
		*pdst++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*pdst++ = '\0';
		n--;
	}
	return (dst);
}
