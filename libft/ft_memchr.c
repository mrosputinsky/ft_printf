/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:09:56 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:10:42 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (n > 0)
	{
		if (a == str[i])
			return (((void *)&str[i]));
		i++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const void *s = "dkfja;l";
	int c = 96;
	void *y = ft_memchr(s, c, 6);
	printf("%c", *(char *)y);
	return (0);
}*/
