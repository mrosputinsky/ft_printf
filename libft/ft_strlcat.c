/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:12:53 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 11:15:32 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	dindex;
	size_t	sindex;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	dindex = d;
	sindex = 0;
	if (size <= d)
		return (s + size);
	while (*(src + sindex) != '\0' && dindex < size - 1)
	{
		*(dst + dindex) = *(src + sindex);
		sindex++;
		dindex++;
		if (dindex == size - 1)
			break ;
	}
	*(dst + dindex) = '\0';
	return (d + s);
}
/*
int	main(void)
{
	char	dest[30];
	char	*src;
	int		x;

	memset(dest, 0, 30);
	src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	// char	*first;
	// char	*last;
	// first = "hello";
	// last = "world";
	x = ft_strlcat(dest, src, 1);
	// int q = strlcat(dest, src, 0);
	printf("%d", x);
	printf("%s", dest);
	// printf("%d", q);
	return (0);
}*/
