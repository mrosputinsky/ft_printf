#include "ft_printf.h"


int ft_printf(char *str, ...)
{
    int print_len = 0;
    int index = 0;
    va_list args;
    va_start(args, str);
    while (str[index])
    {
        if (str[index] == '%')
            {
                print_len += ft_get_formatter(args, str[index + 1]);
                index++;
            }
	
        else
          print_len += ft_print_char(str[index]); 
        index++;
	}
    va_end(args);
    return (print_len);
}

int ft_get_formatter(va_list args, char f)
{
    int len = 0;
    if (f == 'c')
        len += ft_print_char(va_arg(args, int));
    else if (f == 's')
        len += ft_print_str(va_arg(args, char *));
    else if (f == 'd' || f == 'i')
        len += ft_print_number(va_arg(args, int));
	else if (f == 'x' || f == 'X')
		len += ft_print_hexadecimal(va_arg(args, int), f);
	else if (f == 'u')
		len += ft_print_unsigned_int(va_arg(args, int));
	else if(f == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (f == '%')
		len += ft_print_percent();
    return (len);
}

