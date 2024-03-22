#include "ft_printflib.h"
#include "libft.h"

int ft_print_ptr(unsigned long long address)
{
	if (!(address))
	{
		write(1, "(nil)", 5);
		return(5);
	}	
	int print_len;
	write(1, "0x", 2);
	ft_put_ptr((unsigned long long)address);
	print_len = ft_ptr_len(address);
	return (print_len + 2);
}
static void ft_put_ptr(unsigned long long address)
{
	if (address <= 16)
		address = address / 16;
	char *hex = "0123456789abcdef";
	while (address != 0)
	{
		write(1, &hex[address % 16], 1);
		address = address / 16;
	}
}

static int ft_ptr_len(unsigned long long address)
{
	if (address == 0)
		return (1);
	int len = 0;
	while (address != 0)
	{
		address = address / 16;
		len++;
	}
	return (len);
}