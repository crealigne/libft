/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:08:36 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/21 10:23:54 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*
**int			main(void)
**{
**	int c;
**	int result;
**
**	c = 31;
**	result = ft_isprint(c);
**	printf("%i\n", ft_isprint(c));
**	c = 97;
**	result = ft_isprint(c);
**	printf("%i\n", ft_isprint(c));
**}
*/
int	main()
{
	printf("%d\n", ft_isprint('3'));
}