/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_basics.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:56:10 by mrosputi          #+#    #+#             */
/*   Updated: 2024/03/22 16:17:27 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strdup(const char *src)
{
	char	*new;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(src);
	new = (char *)malloc(len + 1);
	while (src[index])
	{
		new[index] = src[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}
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

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_number(int n)
{
	char	*num;
	int		len;

	num = ft_itoa(n);
	len = ft_print_str(num);
    free(num);
	return (len);
}

int	ft_print_str(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}
