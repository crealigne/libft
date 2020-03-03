/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklarsfe <nklarsfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:34:46 by nabbassi          #+#    #+#             */
/*   Updated: 2020/03/03 17:47:20 by nklarsfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (*to_find == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j]
			&& str[i + j] != '\0'
			&& to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char*)(&str[i]));
		i++;
	}
	return ((char*)0);
}
