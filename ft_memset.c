/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:43:11 by nabbassi          #+#    #+#             */
/*   Updated: 2019/12/06 11:36:51 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)b;
	while (i < n)
		d[i++] = (unsigned char)c;
	b = (void *)d;
	return (b);
}
