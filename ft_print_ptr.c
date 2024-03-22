/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:56:25 by mrosputi          #+#    #+#             */
/*   Updated: 2024/03/22 17:00:28 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long address)
{
	int	print_len;

	if (!(address))
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_put_ptr(address);
	print_len = ft_ptr_len(address);
	return (print_len + 2);
}
void	ft_put_ptr(unsigned long long address)
{
	if (address < 10)
	{
		ft_print_char(address + '0');
	}
	if (address >= 10 && address <= 16)
	{
		ft_print_char(address + 87);
	}
	if (address > 16)
	{
		ft_put_ptr(address / 16);
		ft_put_ptr(address % 16);
	}
}

int	ft_ptr_len(unsigned long long address)
{
	int	len;

	if (address == 0)
		return (1);
	len = 0;
	while (address != 0)
	{
		address = address / 16;
		len++;
	}
	return (len);
}
