#include "ft_printflib.h"
#include "libft.h"

int ft_print_unsigned_int(unsigned int nbr)
{
	int print_len = 0;
	char* res_string;
	if (nbr == 0)
	{
		print_len = 1;
		write(1, "0", 1);
	}
	else
	{
		res_string = ft_unsigned_itoa(nbr);
		print_len += ft_print_str(res_string);
		free(res_string);
	}
	return (print_len);
}
int ft_unsigned_int_len(unsigned int nbr)
{
	int len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char *ft_unsigned_itoa(unsigned int nbr)
{;
	int size = ft_unsigned_int_len(nbr);
	char *res_string = (char *)malloc(sizeof(char) * (size + 1));
	if (!(res_string))
			return (0);
	res_string[size] = '\0';
	while (nbr != 0)
	{
		res_string[size - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		size--;
	}
	return (res_string);
}