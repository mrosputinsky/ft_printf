/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:06:30 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 12:17:48 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[50];
	char	*src;
	int		a;

	src = "oumajgos";
	a = ft_strlcpy(dst, src, 5);
	// int b = strlcpy(dst, src, 50);
	printf("%d", a);
	printf("%s", dst);
	return (0);
}*/
