#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_get_formatter(va_list args, char f);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		numofdigits(int n);
int		ft_print_number(int n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *c);
char	*ft_itoa(int n);
int		ft_print_hexadecimal(unsigned int num, char f);
int		hex_len(unsigned int nbr);
int		ft_print_unsigned_int(unsigned int nbr);
int		ft_unsigned_int_len(unsigned int nbr);
char	*ft_unsigned_itoa(unsigned int nbr);
int		ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(unsigned long long address);
int		ft_ptr_len(unsigned long long address);
int		ft_print_percent(void);
int		ft_printf(char *str, ...);

#endif
