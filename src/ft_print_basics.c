#include "ft_printflib.h"
#include "libft.h"

int ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int ft_print_number(int n)
{
    char *num = ft_itoa(n);
    int len = ft_print_str(num);
    return (len);
}

int ft_print_str(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}