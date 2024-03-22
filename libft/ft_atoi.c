/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:08:41 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 11:32:04 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_spaces(int index, const char *str);

int	ft_atoi(const char *str)
{
	int	index;
	int	number;
	int	sign;

	index = 0;
	number = 0;
	sign = 1;
	index = skip_spaces(index, str);
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (sign * number);
}

int	skip_spaces(int index, const char *str)
{
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == '\t')
	{
		index++;
	}
	return (index);
}
/*
int	main(void)
{
	char	string[] = "+-42";
	int		x;
	int		q;

	x = ft_atoi(&string[0]);
	q = atoi(&string[0]);
	printf("%d", x);
	printf("%d", q);
	return (0);
}*/
