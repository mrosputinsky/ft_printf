/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:12:26 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:36:07 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>
int	ft_isascii(int c);
int	main(void)
{
	int	a;
	int	x;

	a = 'N';
	x = ft_isascii(a);
	printf("%d", x);
	return (0);
}*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
