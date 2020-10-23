/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:54:18 by nabbassi          #+#    #+#             */
/*   Updated: 2020/07/21 18:38:42 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc((sizeof(char) * (ft_strlen(s) + 1)))))
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

char	toto(unsigned int i, char c)
{
	i = i + 4;
	c = 25 + c - i;
	return (c);
}

char	titi(unsigned int i, char c)
{
	c = c + i;
	return (c);
}

int			main(void)
{
	char *str;

	str = NULL;
	str = ft_strmapi("ABCDE", &toto);
	printf("str=%s\n", str);
	str = ft_strmapi("ABCDE", &titi);
	printf("str=%s\n", str);
}
