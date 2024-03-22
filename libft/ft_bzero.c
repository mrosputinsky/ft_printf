/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:52:18 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/09 22:23:14 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	int				i;

	temp = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		temp[i] = '\0';
		i++;
		n--;
	}
}
/*
int	main(void)
{
	char tester[20] = "thisiseasyicandoit";
	char tester2[20] = "thisiseasyicandoit";
	ft_bzero(tester, 8);
	bzero(tester2, 8);
	printf("%s", tester);
	printf("\n");
	printf("%s", tester2);
	return (0);
}*/
