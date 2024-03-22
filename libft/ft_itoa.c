/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:09:40 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 12:49:34 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		numofdigits(int n);

char	*ft_itoa(int n)
{
	int		counter;
	char	*res_string;
	int		nbr;

	nbr = n;
	counter = numofdigits(n);
	if (n == -2147483648)
	{
		res_string = "-2147483648";
		return (ft_strdup(res_string));
	}
	res_string = (char *)malloc(counter + 1);
	if (n < 0)
		nbr = -nbr;
	res_string[counter] = '\0';
	while (counter > 0)
	{
		res_string[counter - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		counter--;
	}
	if (n < 0)
		res_string[0] = '-';
	return (res_string);
}

int	numofdigits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
	{
		n = -n;
		digits++;
	}
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
/*
int	main(void)
{
	int a = (0);
	char *o = ft_itoa(a);
	printf("%s", o);
	return (0);
}*/
