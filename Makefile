NAME		= libftprintf.a
CC			= gcc


SRC_FILES	=	ft_printf.c ft_print_basics.c ft_print_ptr.c ft_print_unsigned.c ft_print_hex.c
OBJECTFILES := $(SRC_FILES:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJECTFILES)
	ar rcs $(NAME) $(OBJECTFILES)
CFLAGS = -Wall -Wextra -Werror
clean:
	rm -f $(OBJECTFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all	

