#include "ft_printflib.h"
#include "libft.h"

int ft_print_hexadecimal(unsigned int nbr, char f)
{
	if (nbr >= 16)
		{
			ft_print_hexadecimal(nbr / 16, f);
			ft_print_hexadecimal(nbr % 16, f);
		}
	else
	{
		if (nbr <= 9)
			ft_print_char(nbr + '0');
		else
		{
			if (f == 'x')
				ft_print_char(nbr - 10 + 'a');
			if (f == 'X')
				ft_print_char(nbr - 10 + 'A');
		}
	} 
	return (hex_len(nbr));
}

int hex_len(unsigned int nbr)
{
	if (nbr == 0)
		return (1);
	int len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}