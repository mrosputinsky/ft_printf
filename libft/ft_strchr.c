/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:14:34 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:14:35 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = c;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == a)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "chadfkauqhjalkdfjlasjflakfdlkjdflakjsdf";
	int b = 97;
	char *c = ft_strchr(s, b);
	printf("Found character: %c\n", *c);
	return (0);
}*/
