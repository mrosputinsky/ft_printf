/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:56:38 by mrosputi          #+#    #+#             */
/*   Updated: 2024/03/22 15:59:38 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*x;
	int		a;
	int		b;

	x = "ahoj";
	a = ft_printf("%p", x);
	write(1, "\n", 1);
	b = printf("%p", x);
	if (a == b)
		printf("\nLENGHT OK");
	else
		printf("\nlen a = %i\nlen b =  %i", a, b);
	return (0);
}
