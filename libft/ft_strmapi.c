/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:12:23 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:12:24 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new;
	int		i;

	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char	ft_toupper1(unsigned int x, char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	char *str = "hello";
	char *s;
	s = ft_strmapi(str, ft_toupper1);
	printf("%s", s);
	return (0);
}*/
