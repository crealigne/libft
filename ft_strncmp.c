/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklarsfe <nklarsfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:18:48 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/03 17:49:41 by nklarsfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0'
			&& s2[i] != '\0' && i < n)
		i++;
	if (i != n)
		return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
	else
		return (0);
}
