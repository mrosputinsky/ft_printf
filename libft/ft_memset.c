/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:33:31 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 21:29:09 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		a[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char tester[20];
	char tester2[20];
	ft_memset(tester, 'c', 2);
	printf("%s", tester);
	printf("\n");
	memset(tester2, 'c', 2);
	printf("%s", tester2);
	return (0);
}*/
