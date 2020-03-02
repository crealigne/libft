/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:34:46 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/02 18:33:59 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	c;
	size_t	d;

	c = 0;
	if (!needle)
		return ((char*)haystack);
	while (haystack[c] != '\0')
	{
		d = 0;
		while (haystack[c + d] == needle[d])
			d++;
		if (needle[d] == '\0')
			return (&((char*)haystack)[c]);
		c++;
	}
	return (0);
}
