/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:18:02 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/09 22:24:41 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*int	ft_isprint(int c);

#include <stdio.h>

int	main(void)
{
	int	x;
	int	a;

	x = '*';
	a = ft_isprint(x);
	printf("%d", a);
	return (0);
}*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
